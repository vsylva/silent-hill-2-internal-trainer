﻿#include "d3d12hook.h"

#include <winuser.h>
#include <wrl/client.h>

#include "../deps/detours/detours.h"
#include "../deps/imgui/imgui.h"
#include "../deps/imgui/imgui_impl_dx12.h"
#include "../deps/imgui/imgui_impl_win32.h"
#include "gdk.h"

using Microsoft::WRL::ComPtr;

using ResizeTarget =
    HRESULT(WINAPI*)(IDXGISwapChain3*, const DXGI_MODE_DESC*);

using ResizeBuffers = HRESULT(WINAPI*)(
    IDXGISwapChain3*,
    UINT,
    UINT Width,
    UINT Height,
    DXGI_FORMAT,
    UINT
);

using Present = HRESULT(WINAPI*)(IDXGISwapChain3*, UINT, UINT);

using ExecuteCommandLists =
    void(WINAPI*)(ID3D12CommandQueue*, UINT, ID3D12CommandList*);

std::vector<FrameContext> D3d12Hook::FrameContextArray = {};
uint32_t D3d12Hook::FrameBufferCount = 2;

ComPtr<ID3D12Device> D3d12Hook::pDevice = NULL;
ComPtr<ID3D12Device> D3d12Hook::pDevice1 = NULL;
ComPtr<IDXGISwapChain> D3d12Hook::pSwapChain = NULL;
ComPtr<ID3D12CommandQueue> D3d12Hook::pCommandQueue = NULL;
ComPtr<ID3D12CommandQueue> D3d12Hook::pCommandQueue1 = NULL;
ComPtr<ID3D12CommandAllocator> D3d12Hook::pCommandAllocator = NULL;
ComPtr<ID3D12CommandAllocator> D3d12Hook::pCommandAllocator1 = NULL;
ComPtr<ID3D12GraphicsCommandList> D3d12Hook::pCommandList = NULL;
ComPtr<ID3D12GraphicsCommandList> D3d12Hook::pCommandList1 = NULL;

ComPtr<ID3D12DescriptorHeap> D3d12Hook::pRtvDescHeap = NULL;
ComPtr<ID3D12DescriptorHeap> D3d12Hook::pSrvDescHeap = NULL;

ComPtr<IDXGIFactory> D3d12Hook::pFactory = NULL;
ComPtr<IDXGIAdapter> D3d12Hook::pAdapter = NULL;

Present D3d12Hook::pPresentFunc = NULL;
ExecuteCommandLists D3d12Hook::pExecuteCommandListsFunc = NULL;
ResizeBuffers D3d12Hook::pResizeBuffersFunc = NULL;
ResizeTarget D3d12Hook::pResizeTargetFunc = NULL;

HWND D3d12Hook::DummyWindow = NULL;
HWND D3d12Hook::OutputWindow = NULL;
WNDPROC D3d12Hook::OriginalWindowProcedure = NULL;

const TCHAR* D3d12Hook::DummyWindowName =
    TEXT("C98E8963-0C6B-1943-B221-25543B2805CA");
WNDCLASSEX D3d12Hook::DummyWindowClass;

const UINT D3d12Hook::WIDTH = 0;
const UINT D3d12Hook::HEIGHT = 0;

bool D3d12Hook::IsInitialized = false;
bool D3d12Hook::is_showing_main_window = true;

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND, UINT, WPARAM, LPARAM);

void D3d12Hook::ResetState() {
    if (D3d12Hook::IsInitialized) {
        D3d12Hook::IsInitialized = false;
        ImGui_ImplDX12_Shutdown();
        ImGui_ImplWin32_Shutdown();
        ImGui::DestroyContext();
    }

    pSrvDescHeap.Reset();
    pRtvDescHeap.Reset();
    pCommandList1.Reset();
    pCommandQueue1.Reset();

    FrameContextArray.clear();
}

LRESULT CALLBACK D3d12Hook::NewWindowProcedure(
    HWND _hWnd,
    UINT _uMsg,
    WPARAM _wParam,
    LPARAM _lParam
) {
    if (ImGui_ImplWin32_WndProcHandler(_hWnd, _uMsg, _wParam, _lParam))
        return true;

    return CallWindowProc(
        OriginalWindowProcedure,
        _hWnd,
        _uMsg,
        _wParam,
        _lParam
    );
}

HRESULT
D3d12Hook::NewPresent(
    IDXGISwapChain3* _SwapChain,
    UINT _SyncInterval,
    UINT _Flags
) {
    if (pCommandQueue1 == NULL) {
        return pPresentFunc(_SwapChain, _SyncInterval, _Flags);
    }

    if (!IsInitialized) {
        pDevice1.Reset();

        pCommandAllocator1.Reset();

        if (_SwapChain->GetDevice(IID_PPV_ARGS(pDevice1.GetAddressOf()))
            != 0) {
            return pPresentFunc(_SwapChain, _SyncInterval, _Flags);
        }

        DXGI_SWAP_CHAIN_DESC _SwapChainDesc;
        _SwapChain->GetDesc(&_SwapChainDesc);
        OutputWindow = _SwapChainDesc.OutputWindow;
        if (!OriginalWindowProcedure) {
            OriginalWindowProcedure = (WNDPROC)SetWindowLongPtrA(
                OutputWindow,
                GWLP_WNDPROC,
                (__int64)(LONG_PTR)NewWindowProcedure
            );
        }
        FrameBufferCount = _SwapChainDesc.BufferCount;

        FrameContextArray.clear();
        FrameContextArray.resize(FrameBufferCount);

        D3D12_DESCRIPTOR_HEAP_DESC _SrvHeapDesc = {};
        _SrvHeapDesc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
        _SrvHeapDesc.NumDescriptors = FrameBufferCount;
        _SrvHeapDesc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;

        if (pDevice1->CreateDescriptorHeap(
                &_SrvHeapDesc,
                IID_PPV_ARGS(pSrvDescHeap.GetAddressOf())
            )
            != 0) {
            return pPresentFunc(_SwapChain, _SyncInterval, _Flags);
        }

        D3D12_DESCRIPTOR_HEAP_DESC _RtvHeapDesc = {};
        _RtvHeapDesc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
        _RtvHeapDesc.NumDescriptors = FrameBufferCount;
        _RtvHeapDesc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;
        _RtvHeapDesc.NodeMask = 1;

        if (pDevice1->CreateDescriptorHeap(
                &_RtvHeapDesc,
                IID_PPV_ARGS(pRtvDescHeap.GetAddressOf())
            )
            != 0) {
            return pPresentFunc(_SwapChain, _SyncInterval, _Flags);
        }

        const auto _RtvDescriptorSize =
            pDevice1->GetDescriptorHandleIncrementSize(
                D3D12_DESCRIPTOR_HEAP_TYPE_RTV
            );

        D3D12_CPU_DESCRIPTOR_HANDLE _RtvHandle =
            pRtvDescHeap->GetCPUDescriptorHandleForHeapStart();

        for (uint8_t i = 0; i < FrameBufferCount; i++) {
            FrameContextArray[i].RenderTargetDescriptor = _RtvHandle;
            _SwapChain->GetBuffer(
                i,
                IID_PPV_ARGS(FrameContextArray[i]
                                 .RenderTargetResource.GetAddressOf())
            );

            pDevice1->CreateRenderTargetView(
                FrameContextArray[i].RenderTargetResource.Get(),
                NULL,
                _RtvHandle
            );

            _RtvHandle.ptr += _RtvDescriptorSize;
        }

        if (pDevice1->CreateCommandAllocator(
                D3D12_COMMAND_LIST_TYPE_DIRECT,
                IID_PPV_ARGS(pCommandAllocator1.GetAddressOf())
            )
            != 0) {
            return pPresentFunc(_SwapChain, _SyncInterval, _Flags);
        }

        for (size_t i = 0; i < FrameBufferCount; i++) {
            if (pDevice1->CreateCommandAllocator(
                    D3D12_COMMAND_LIST_TYPE_DIRECT,
                    IID_PPV_ARGS(FrameContextArray[i]
                                     .pCommandAllocator.GetAddressOf())
                )
                != 0L) {
                return pPresentFunc(_SwapChain, _SyncInterval, _Flags);
            }
        }

        if (pDevice1->CreateCommandList(
                0,
                D3D12_COMMAND_LIST_TYPE_DIRECT,
                FrameContextArray[0].pCommandAllocator.Get(),
                NULL,
                IID_PPV_ARGS(pCommandList1.GetAddressOf())
            ) != 0L
            || pCommandList1->Close() != 0L) {
            return pPresentFunc(_SwapChain, _SyncInterval, _Flags);
        }

        IMGUI_CHECKVERSION();

        ImGui::CreateContext();

        ImGuiIO& io = ImGui::GetIO();

        io.IniFilename = NULL;

        ImGui::StyleColorsDark();

        auto& _ImGuiStyle = ImGui::GetStyle();
        _ImGuiStyle.WindowRounding = 0.0f;
        _ImGuiStyle.ChildRounding = 0.0f;
        _ImGuiStyle.PopupRounding = 0.0f;
        _ImGuiStyle.FrameRounding = 0.0f;
        _ImGuiStyle.ScrollbarRounding = 2.0f;
        _ImGuiStyle.GrabRounding = 0.0f;
        _ImGuiStyle.TabRounding = 0.0f;
        _ImGuiStyle.WindowBorderSize = 2.0f;
        _ImGuiStyle.WindowPadding = ImVec2(2.0f, 0.0f);

        auto& _ImGuiStyleColors = ImGui::GetStyle().Colors;

        _ImGuiStyleColors[ImGuiCol_WindowBg] =
            ImVec4 {0.1f, 0.105f, 0.11f, 1.0f};

        _ImGuiStyleColors[ImGuiCol_NavHighlight] =
            ImVec4 {0.3f, 0.305f, 0.31f, 1.0f};

        _ImGuiStyleColors[ImGuiCol_PlotHistogram] =
            ImVec4 {0.3f, 0.305f, 0.31f, 1.0f};

        _ImGuiStyleColors[ImGuiCol_Header] =
            ImVec4 {0.2f, 0.205f, 0.21f, 1.0f};
        _ImGuiStyleColors[ImGuiCol_HeaderHovered] =
            ImVec4 {0.3f, 0.305f, 0.31f, 1.0f};
        _ImGuiStyleColors[ImGuiCol_HeaderActive] =
            ImVec4 {0.55f, 0.5505f, 0.551f, 1.0f};

        _ImGuiStyleColors[ImGuiCol_Button] =
            ImVec4 {0.2f, 0.205f, 0.21f, 1.0f};
        _ImGuiStyleColors[ImGuiCol_ButtonHovered] =
            ImVec4 {0.3f, 0.305f, 0.31f, 1.0f};
        _ImGuiStyleColors[ImGuiCol_ButtonActive] =
            ImVec4 {0.55f, 0.5505f, 0.551f, 1.0f};

        _ImGuiStyleColors[ImGuiCol_CheckMark] =
            ImVec4(0.55f, 0.5505f, 0.551f, 1.0f);

        _ImGuiStyleColors[ImGuiCol_FrameBg] =
            ImVec4 {0.211f, 0.210f, 0.25f, 1.0f};
        _ImGuiStyleColors[ImGuiCol_FrameBgHovered] =
            ImVec4 {0.3f, 0.305f, 0.31f, 1.0f};
        _ImGuiStyleColors[ImGuiCol_FrameBgActive] =
            ImVec4 {0.55f, 0.5505f, 0.551f, 1.0f};

        _ImGuiStyleColors[ImGuiCol_Tab] =
            ImVec4 {0.25f, 0.2505f, 0.251f, 1.0f};
        _ImGuiStyleColors[ImGuiCol_TabHovered] =
            ImVec4 {0.38f, 0.3805f, 0.381f, 1.0f};
        _ImGuiStyleColors[ImGuiCol_TabActive] =
            ImVec4 {0.28f, 0.2805f, 0.281f, 1.0f};
        _ImGuiStyleColors[ImGuiCol_TabUnfocused] =
            ImVec4 {0.25f, 0.2505f, 0.251f, 1.0f};
        _ImGuiStyleColors[ImGuiCol_TabUnfocusedActive] =
            ImVec4 {0.8f, 0.805f, 0.81f, 1.0f};

        _ImGuiStyleColors[ImGuiCol_ResizeGrip] =
            ImVec4 {0.2f, 0.205f, 0.21f, 0.0f};
        _ImGuiStyleColors[ImGuiCol_ResizeGripHovered] =
            ImVec4 {0.3f, 0.305f, 0.31f, 1.0f};
        _ImGuiStyleColors[ImGuiCol_ResizeGripActive] =
            ImVec4 {0.55f, 0.5505f, 0.551f, 1.0f};

        _ImGuiStyleColors[ImGuiCol_TitleBg] =
            ImVec4 {0.25f, 0.2505f, 0.251f, 1.0f};
        _ImGuiStyleColors[ImGuiCol_TitleBgActive] =
            ImVec4 {0.55f, 0.5505f, 0.551f, 1.0f};
        _ImGuiStyleColors[ImGuiCol_TitleBgCollapsed] =
            ImVec4 {0.25f, 0.2505f, 0.251f, 1.0f};

        ImGui_ImplWin32_Init(OutputWindow);

        ImGui_ImplDX12_Init(
            pDevice1.Get(),
            FrameBufferCount,
            DXGI_FORMAT_R8G8B8A8_UNORM,
            pSrvDescHeap.Get(),
            pSrvDescHeap->GetCPUDescriptorHandleForHeapStart(),
            pSrvDescHeap->GetGPUDescriptorHandleForHeapStart()
        );

        IsInitialized = true;

        pDevice1->Release();
    }

    ImGui_ImplWin32_NewFrame();
    ImGui_ImplDX12_NewFrame();
    ImGui::NewFrame();

    GDK::on_frame();

    ImGui::EndFrame();

    FrameContext& _CurrentFrameContext =
        FrameContextArray[_SwapChain->GetCurrentBackBufferIndex()];
    _CurrentFrameContext.pCommandAllocator->Reset();

    D3D12_RESOURCE_BARRIER _Barrier {};
    _Barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
    _Barrier.Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE;
    _Barrier.Transition.pResource =
        _CurrentFrameContext.RenderTargetResource.Get();
    _Barrier.Transition.Subresource =
        D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
    _Barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_PRESENT;
    _Barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_RENDER_TARGET;
    pCommandList1->Reset(
        _CurrentFrameContext.pCommandAllocator.Get(),
        NULL
    );
    pCommandList1->ResourceBarrier(1, &_Barrier);
    pCommandList1->OMSetRenderTargets(
        1,
        &_CurrentFrameContext.RenderTargetDescriptor,
        0,
        NULL
    );
    pCommandList1->SetDescriptorHeaps(1, pSrvDescHeap.GetAddressOf());
    ImGui::Render();
    ImGui_ImplDX12_RenderDrawData(
        ImGui::GetDrawData(),
        pCommandList1.Get()
    );
    _Barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_RENDER_TARGET;
    _Barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_PRESENT;
    pCommandList1->ResourceBarrier(1, &_Barrier);
    pCommandList1->Close();

    pCommandQueue1->ExecuteCommandLists(
        1,
        (ID3D12CommandList**)pCommandList1.GetAddressOf()
    );
    return pPresentFunc(_SwapChain, _SyncInterval, _Flags);
}

void D3d12Hook::ExecuteCommandListsNew(
    ID3D12CommandQueue* _Queue,
    UINT _NumCommandLists,
    ID3D12CommandList* _CommandLists
) {
    if (!pCommandQueue1
        && _Queue->GetDesc().Type == D3D12_COMMAND_LIST_TYPE_DIRECT) {
        pCommandQueue1 = _Queue;
    }

    pExecuteCommandListsFunc(_Queue, _NumCommandLists, _CommandLists);
}

HRESULT D3d12Hook::NewResizeBuffers(
    IDXGISwapChain3* _SwapChain,
    UINT _BufferCount,
    UINT _Width,
    UINT _Height,
    DXGI_FORMAT _NewFormat,
    UINT _SwapChainFlags
) {
    ResetState();
    return pResizeBuffersFunc(
        _SwapChain,
        _BufferCount,
        _Width,
        _Height,
        _NewFormat,
        _SwapChainFlags
    );
}

HRESULT D3d12Hook::NewResizeTarget(
    IDXGISwapChain3* _SwapChain,
    const DXGI_MODE_DESC* _pNewModeDesc
) {
    ResetState();
    return pResizeTargetFunc(_SwapChain, _pNewModeDesc);
}

void D3d12Hook::hook_enable() {
    DummyWindowClass.cbSize = sizeof(WNDCLASSEX);
    DummyWindowClass.style = CS_HREDRAW | CS_VREDRAW;
    DummyWindowClass.lpfnWndProc = DefWindowProc;
    DummyWindowClass.cbClsExtra = 0;
    DummyWindowClass.cbWndExtra = 0;
    DummyWindowClass.hInstance = GetModuleHandle(NULL);
    DummyWindowClass.hIcon = NULL;
    DummyWindowClass.hCursor = NULL;
    DummyWindowClass.hbrBackground = NULL;
    DummyWindowClass.lpszMenuName = NULL;
    DummyWindowClass.lpszClassName = DummyWindowName;
    DummyWindowClass.hIconSm = NULL;

    RegisterClassEx(&DummyWindowClass);

    DummyWindow = CreateWindowEx(
        0L,
        DummyWindowClass.lpszClassName,
        TEXT("Fake DirectX OutputWindow"),
        WS_OVERLAPPEDWINDOW,
        0,
        0,
        100,
        100,
        NULL,
        NULL,
        DummyWindowClass.hInstance,
        NULL
    );

    if (CreateDXGIFactory(IID_PPV_ARGS(pFactory.GetAddressOf())) < 0) {
        DestroyWindow(DummyWindow);
        UnregisterClass(
            DummyWindowClass.lpszClassName,
            DummyWindowClass.hInstance
        );

        return;
    }

    if (pFactory->EnumAdapters(0, pAdapter.GetAddressOf())
        == DXGI_ERROR_NOT_FOUND) {
        DestroyWindow(DummyWindow);
        UnregisterClass(
            DummyWindowClass.lpszClassName,
            DummyWindowClass.hInstance
        );

        return;
    }

    if (D3D12CreateDevice(
            pAdapter.Get(),
            D3D_FEATURE_LEVEL_11_0,
            IID_PPV_ARGS(pDevice.GetAddressOf())
        )
        < 0) {
        DestroyWindow(DummyWindow);
        UnregisterClass(
            DummyWindowClass.lpszClassName,
            DummyWindowClass.hInstance
        );

        return;
    }

    D3D12_COMMAND_QUEUE_DESC _QueueDesc;
    _QueueDesc.Type = D3D12_COMMAND_LIST_TYPE_DIRECT;
    _QueueDesc.Priority = 0;
    _QueueDesc.Flags = D3D12_COMMAND_QUEUE_FLAG_NONE;
    _QueueDesc.NodeMask = 0;

    if (pDevice->CreateCommandQueue(
            &_QueueDesc,
            IID_PPV_ARGS(pCommandQueue.GetAddressOf())
        )
        < 0) {
        DestroyWindow(DummyWindow);
        UnregisterClass(
            DummyWindowClass.lpszClassName,
            DummyWindowClass.hInstance
        );

        return;
    }

    if (pDevice->CreateCommandAllocator(
            D3D12_COMMAND_LIST_TYPE_DIRECT,
            IID_PPV_ARGS(pCommandAllocator.GetAddressOf())
        )
        < 0) {
        DestroyWindow(DummyWindow);
        UnregisterClass(
            DummyWindowClass.lpszClassName,
            DummyWindowClass.hInstance
        );

        return;
    }
    if (pDevice->CreateCommandList(
            0,
            D3D12_COMMAND_LIST_TYPE_DIRECT,
            pCommandAllocator.Get(),
            NULL,
            IID_PPV_ARGS(pCommandList.GetAddressOf())
        )
        < 0) {
        DestroyWindow(DummyWindow);
        UnregisterClass(
            DummyWindowClass.lpszClassName,
            DummyWindowClass.hInstance
        );

        return;
    }

    DXGI_RATIONAL _RefreshRate;
    _RefreshRate.Numerator = 60;
    _RefreshRate.Denominator = 1;

    DXGI_MODE_DESC _BufferDesc;
    _BufferDesc.Width = WIDTH;
    _BufferDesc.Height = HEIGHT;
    _BufferDesc.RefreshRate = _RefreshRate;
    _BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    _BufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
    _BufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;

    DXGI_SAMPLE_DESC _SampleDesc;
    _SampleDesc.Count = 1;
    _SampleDesc.Quality = 0;

    DXGI_SWAP_CHAIN_DESC _SwapChainDesc = {};
    _SwapChainDesc.BufferDesc = _BufferDesc;
    _SwapChainDesc.SampleDesc = _SampleDesc;
    _SwapChainDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    _SwapChainDesc.BufferCount = 2;
    _SwapChainDesc.OutputWindow = GetForegroundWindow();
    _SwapChainDesc.Windowed = 1;
    _SwapChainDesc.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;
    _SwapChainDesc.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;

    if (pFactory->CreateSwapChain(
            pCommandQueue.Get(),
            &_SwapChainDesc,
            pSwapChain.GetAddressOf()
        )
        < 0) {
        DestroyWindow(DummyWindow);
        UnregisterClass(
            DummyWindowClass.lpszClassName,
            DummyWindowClass.hInstance
        );

        return;
    }

    void** SwapChainVTable = *reinterpret_cast<void***>(pSwapChain.Get());
    void** CommandQueueVTable =
        *reinterpret_cast<void***>(pCommandQueue.Get());

    pPresentFunc = (Present)SwapChainVTable[8];
    pExecuteCommandListsFunc = (ExecuteCommandLists)CommandQueueVTable[10];
    pResizeBuffersFunc = (ResizeBuffers)SwapChainVTable[13];
    pResizeTargetFunc = (ResizeTarget)SwapChainVTable[14];

    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(
        &(PVOID&)pExecuteCommandListsFunc,
        (void*)ExecuteCommandListsNew
    );
    DetourAttach(&(PVOID&)pPresentFunc, (void*)NewPresent);
    DetourAttach(&(PVOID&)pResizeBuffersFunc, (void*)NewResizeBuffers);
    // DetourAttach(&(PVOID &)pResizeTargetFunc, (void *)NewResizeTarget);
    DetourTransactionCommit();

    return;
}

void D3d12Hook::hook_disable() {
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());

    // DetourDetach(&(PVOID &)pResizeTargetFunc, (void *)NewResizeTarget);
    DetourDetach(&(PVOID&)pResizeBuffersFunc, (void*)NewResizeBuffers);
    DetourDetach(&(PVOID&)pPresentFunc, (void*)NewPresent);
    DetourDetach(
        &(PVOID&)pExecuteCommandListsFunc,
        (void*)ExecuteCommandListsNew
    );

    DetourTransactionCommit();

    ResetState();

    FrameContextArray[0].pCommandAllocator->Release();
    FrameContextArray[0].RenderTargetResource->Release();
    FrameContextArray[1].pCommandAllocator->Release();
    FrameContextArray[1].RenderTargetResource->Release();

    pDevice->Release();
    pSwapChain->Release();
    pCommandQueue->Release();
    pCommandAllocator->Release();
    pCommandList->Release();

    pRtvDescHeap->Release();
    pSrvDescHeap->Release();
    pCommandQueue1->Release();
    pCommandList1->Release();

    pDevice1->Release();
    pCommandAllocator1->Release();

    pFactory->Release();
    pAdapter->Release();

    if (OutputWindow && OriginalWindowProcedure) {
        SetWindowLongPtr(
            OutputWindow,
            GWLP_WNDPROC,
            (__int64)(LONG_PTR)OriginalWindowProcedure
        );
    }

    DestroyWindow(DummyWindow);
    UnregisterClass(
        DummyWindowClass.lpszClassName,
        DummyWindowClass.hInstance
    );
}
