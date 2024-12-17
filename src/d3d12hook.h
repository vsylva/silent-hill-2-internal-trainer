#pragma once
#include <Windows.h>
#include <d3d12.h>
#include <dxgi1_4.h>
#include <minwinbase.h>
#include <wrl/client.h>

#include <vector>

#pragma comment(lib, "detours.x64.release.lib")
#pragma comment(lib, "dxgi.lib")
#pragma comment(lib, "d3d12.lib")

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

        struct FrameContext {
        ComPtr<ID3D12CommandAllocator> pCommandAllocator;
        ComPtr<ID3D12Resource> RenderTargetResource;
        D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetDescriptor;
    };

class D3d12Hook {
  private:


    static std::vector<FrameContext> FrameContextArray;
    static uint32_t FrameBufferCount;

    static ComPtr<ID3D12Device> pDevice;
    static ComPtr<ID3D12Device> pDevice1;
    static ComPtr<IDXGISwapChain> pSwapChain;
    static ComPtr<ID3D12CommandQueue> pCommandQueue;
    static ComPtr<ID3D12CommandQueue> pCommandQueue1;
    static ComPtr<ID3D12CommandAllocator> pCommandAllocator;
    static ComPtr<ID3D12CommandAllocator> pCommandAllocator1;
    static ComPtr<ID3D12GraphicsCommandList> pCommandList;
    static ComPtr<ID3D12GraphicsCommandList> pCommandList1;

    static ComPtr<ID3D12DescriptorHeap> pRtvDescHeap;
    static ComPtr<ID3D12DescriptorHeap> pSrvDescHeap;

    static ComPtr<IDXGIFactory> pFactory;
    static ComPtr<IDXGIAdapter> pAdapter;

    static Present pPresentFunc;
    static ExecuteCommandLists pExecuteCommandListsFunc;
    static ResizeBuffers pResizeBuffersFunc;
    static ResizeTarget pResizeTargetFunc;

    static HWND DummyWindow;
    static HWND OutputWindow;
    static WNDPROC OriginalWindowProcedure;

    static const TCHAR* DummyWindowName;
    static WNDCLASSEX DummyWindowClass;

    static const UINT WIDTH;
    static const UINT HEIGHT;

    static bool IsInitialized;

    static void ResetState();

    static LRESULT CALLBACK NewWindowProcedure(
        HWND _hWnd,
        UINT _uMsg,
        WPARAM _wParam,
        LPARAM _lParam
    );

    static HRESULT NewPresent(
        IDXGISwapChain3* _SwapChain,
        UINT _SyncInterval,
        UINT _Flags
    );

    static void ExecuteCommandListsNew(
        ID3D12CommandQueue* _Queue,
        UINT _NumCommandLists,
        ID3D12CommandList* _CommandLists
    );

    static HRESULT NewResizeBuffers(
        IDXGISwapChain3* _SwapChain,
        UINT _BufferCount,
        UINT _Width,
        UINT _Height,
        DXGI_FORMAT _NewFormat,
        UINT _SwapChainFlags
    );

    static HRESULT NewResizeTarget(
        IDXGISwapChain3* _SwapChain,
        const DXGI_MODE_DESC* _pNewModeDesc
    );

    static int EnableHook();

    static void DisableHook();

  public:
    static bool is_showing_main_window;
    static void hook_enable();
    static void hook_disable();
};
