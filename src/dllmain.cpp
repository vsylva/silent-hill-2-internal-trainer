// #include <cstdio>

#include "d3d11hook.h"

BOOL APIENTRY
DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        // AllocConsole();
        // FILE* Dummy;
        // freopen_s(&Dummy, "CONOUT$", "w", stdout);
        // freopen_s(&Dummy, "CONIN$", "r", stdin);

        CreateThread(
            nullptr,
            0,
            (LPTHREAD_START_ROUTINE)(void*)D3d11Hook::hook_enable,
            (LPVOID)(hModule),
            0,
            nullptr
        );
    }

    else if (ul_reason_for_call == DLL_PROCESS_DETACH) {
    }
    return TRUE;
}
