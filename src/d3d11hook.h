#pragma once
#pragma comment(lib, "d3d11.lib")

#include <d3d11.h>

class D3d11Hook {
  private:
    static const int font_size = 22.0f;

    typedef HRESULT(WINAPI* IDXGISwapChainPresent)(
        IDXGISwapChain*,
        UINT,
        UINT
    );

    typedef HRESULT(WINAPI* IDXGISwapChainResizeBuffers)(
        IDXGISwapChain*,
        UINT,
        UINT,
        UINT,
        DXGI_FORMAT,
        UINT
    );

    static bool is_initialized;

    static WNDPROC g_o_wnd_proc;
    static HWND g_output_wnd;
    static ID3D11Device* g_device;
    static ID3D11DeviceContext* g_context;
    static ID3D11RenderTargetView* g_render_target_view;
    static IDXGISwapChain* g_swap_chain;
    static DXGI_SWAP_CHAIN_DESC g_swap_chain_desc;
    static IDXGISwapChainPresent g_o_present;
    static IDXGISwapChainResizeBuffers g_o_resize_buffers;

    static LRESULT WINAPI
    wnd_proc_new(HWND hwnd, UINT u_msg, WPARAM w_param, LPARAM l_param);

    static HRESULT WINAPI present_new(
        IDXGISwapChain* p_swap_chain,
        UINT sync_interval,
        UINT flags
    );

    static HRESULT WINAPI resize_buffers_new(
        IDXGISwapChain* p_swap_chain,
        UINT buffer_count,
        UINT width,
        UINT height,
        DXGI_FORMAT new_format,
        UINT swap_chain_flags
    );

  public:
    static bool is_showing_main_window;
    static void hook_enable();
    static void hook_disable();
};
