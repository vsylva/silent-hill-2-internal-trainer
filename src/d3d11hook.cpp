#include "d3d11hook.h"

#include <winuser.h>

#include "../deps/detours/detours.h"
#include "../deps/imgui/imgui.h"
#include "../deps/imgui/imgui_impl_dx11.h"
#include "../deps/imgui/imgui_impl_win32.h"
#include "gdk.h"

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND, UINT, WPARAM, LPARAM);

bool D3d11Hook::is_showing_main_window = true;
bool D3d11Hook::is_initialized = false;
WNDPROC D3d11Hook::g_o_wnd_proc = nullptr;
HWND D3d11Hook::g_output_wnd = nullptr;

ID3D11Device* D3d11Hook::g_device = nullptr;
ID3D11DeviceContext* D3d11Hook::g_context = nullptr;
ID3D11RenderTargetView* D3d11Hook::g_render_target_view = nullptr;
IDXGISwapChain* D3d11Hook::g_swap_chain = nullptr;
DXGI_SWAP_CHAIN_DESC D3d11Hook::g_swap_chain_desc = {};

D3d11Hook::IDXGISwapChainPresent D3d11Hook::g_o_present = nullptr;
D3d11Hook::IDXGISwapChainResizeBuffers D3d11Hook::g_o_resize_buffers =
    nullptr;

LRESULT WINAPI D3d11Hook::wnd_proc_new(
    HWND hwnd,
    UINT u_msg,
    WPARAM w_param,
    LPARAM l_param
) {
    // TODO need to find a better way
    switch (u_msg) {
        case WM_KEYDOWN:
            // key ~
            if (w_param == VK_OEM_3) {
                ImGui::GetIO().AddKeyEvent(ImGuiKey_GraveAccent, true);
                break;
            }

            if (w_param == 0x54) {
                ImGui::GetIO().AddKeyEvent(ImGuiKey_T, true);
                break;
            }

        case WM_KEYUP:
            if (w_param == 0xC0) {
                ImGui::GetIO().AddKeyEvent(ImGuiKey_GraveAccent, false);
                break;
            }

            if (w_param == 0x54) {
                ImGui::GetIO().AddKeyEvent(ImGuiKey_T, false);
                break;
            }

        case WM_LBUTTONDOWN:
            ImGui::GetIO().AddMouseButtonEvent(
                ImGuiMouseButton_Left,
                true
            );
            break;

        case WM_LBUTTONUP:
            ImGui::GetIO().AddMouseButtonEvent(
                ImGuiMouseButton_Left,
                false
            );
            break;

        default:
            break;
    }

    return CallWindowProc(g_o_wnd_proc, hwnd, u_msg, w_param, l_param);
}

HRESULT WINAPI D3d11Hook::present_new(
    IDXGISwapChain* p_swap_chain,
    UINT sync_interval,
    UINT flags
) {
    if (!is_initialized) {
        HRESULT result = p_swap_chain->GetDevice(IID_PPV_ARGS(&g_device));

        if (result)
            return g_o_present(p_swap_chain, sync_interval, flags);

        g_device->GetImmediateContext(&g_context);

        result = p_swap_chain->GetDesc(&g_swap_chain_desc);

        if (result)
            return g_o_present(p_swap_chain, sync_interval, flags);

        g_output_wnd = g_swap_chain_desc.OutputWindow;

        ID3D11Texture2D* p_back_buffer;

        result = p_swap_chain->GetBuffer(0, IID_PPV_ARGS(&p_back_buffer));

        if (result)
            return g_o_present(p_swap_chain, sync_interval, flags);

        result = g_device->CreateRenderTargetView(
            p_back_buffer,
            nullptr,
            &g_render_target_view
        );

        if (result)
            return g_o_present(p_swap_chain, sync_interval, flags);

        p_back_buffer->Release();

        ImGui::CreateContext();

        ImGuiIO& io = ImGui::GetIO();

        ImGui::StyleColorsLight();

        io.IniFilename = NULL;

        io.Fonts->AddFontFromFileTTF(
            "C:\\windows\\fonts\\simhei.ttf",
            font_size,
            NULL,
            io.Fonts->GetGlyphRangesChineseFull()
        );

        ImGui_ImplWin32_Init(g_output_wnd);

        ImGui_ImplDX11_Init(g_device, g_context);

        g_o_wnd_proc = (WNDPROC)SetWindowLongPtrA(
            g_output_wnd,
            GWLP_WNDPROC,
            (LONG_PTR)wnd_proc_new
        );

        is_initialized = true;
    }

    ImGui_ImplWin32_NewFrame();

    ImGui_ImplDX11_NewFrame();

    ImGui::NewFrame();

    /////////////////////////////////////////////////////////////////
    GDK::on_frame();
    /////////////////////////////////////////////////////////////////

    ImGui::EndFrame();

    ImGui::Render();

    g_context->OMSetRenderTargets(1, &g_render_target_view, NULL);

    ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

    return g_o_present(p_swap_chain, sync_interval, flags);
}

HRESULT WINAPI D3d11Hook::resize_buffers_new(
    IDXGISwapChain* p_swap_chain,
    UINT buffer_count,
    UINT width,
    UINT height,
    DXGI_FORMAT new_format,
    UINT swap_chain_flags
) {
    if (g_render_target_view) {
        g_context->OMSetRenderTargets(0, 0, 0);
        g_render_target_view->Release();
    }

    HRESULT result = g_o_resize_buffers(
        p_swap_chain,
        buffer_count,
        width,
        height,
        new_format,
        swap_chain_flags
    );

    ID3D11Texture2D* p_buffer;

    p_swap_chain->GetBuffer(0, IID_PPV_ARGS(&p_buffer));

    if (g_device->CreateRenderTargetView(
            p_buffer,
            nullptr,
            &g_render_target_view
        ))
        return 0;

    p_buffer->Release();

    g_context->OMSetRenderTargets(1, &g_render_target_view, NULL);

    D3D11_VIEWPORT view_port;
    ZeroMemory(&view_port, sizeof(view_port));
    view_port.Width = (float)width;
    view_port.Height = (float)height;
    view_port.MinDepth = 0.0f;
    view_port.MaxDepth = 1.0f;
    view_port.TopLeftX = 0;
    view_port.TopLeftY = 0;

    g_context->RSSetViewports(1, &view_port);

    return result;
}

void D3d11Hook::hook_enable() {
    ZeroMemory(&g_swap_chain_desc, sizeof(g_swap_chain_desc));

    g_swap_chain_desc.BufferDesc.Width = NULL;
    g_swap_chain_desc.BufferDesc.Height = NULL;
    g_swap_chain_desc.BufferDesc.RefreshRate.Numerator = 60;
    g_swap_chain_desc.BufferDesc.RefreshRate.Denominator = 1;
    g_swap_chain_desc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    g_swap_chain_desc.BufferDesc.ScanlineOrdering =
        DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
    g_swap_chain_desc.BufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;
    g_swap_chain_desc.SampleDesc.Count = 1;
    g_swap_chain_desc.SampleDesc.Quality = 0;
    g_swap_chain_desc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    g_swap_chain_desc.BufferCount = 2;
    g_swap_chain_desc.OutputWindow = GetForegroundWindow();
    g_swap_chain_desc.Windowed = true;
    g_swap_chain_desc.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
    g_swap_chain_desc.Flags = NULL;

    if (D3D11CreateDeviceAndSwapChain(
            NULL,
            D3D_DRIVER_TYPE_HARDWARE,
            NULL,
            NULL,
            NULL,
            NULL,
            D3D11_SDK_VERSION,
            &g_swap_chain_desc,
            &g_swap_chain,
            &g_device,
            NULL,
            NULL
        ))
        return;

    void** pp_swap_chain_vtable = *reinterpret_cast<void***>(g_swap_chain);

    g_o_present = (IDXGISwapChainPresent)pp_swap_chain_vtable[8];

    g_o_resize_buffers =
        (IDXGISwapChainResizeBuffers)pp_swap_chain_vtable[13];

    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)g_o_present, (void*)present_new);
    DetourAttach(&(PVOID&)g_o_resize_buffers, (void*)resize_buffers_new);
    DetourTransactionCommit();
}

void D3d11Hook::hook_disable() {
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourDetach(&(PVOID&)g_o_present, (void*)present_new);
    DetourDetach(&(PVOID&)g_o_resize_buffers, (void*)resize_buffers_new);
    DetourTransactionCommit();

    ImGui_ImplDX11_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();

    g_render_target_view->Release();
    g_swap_chain->Release();
    g_context->Release();
    g_device->Release();
}
