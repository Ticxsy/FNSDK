#include "stdafx.h"
#include "d3d11.h"

DWORD WINAPI MainThread(HMODULE hModule)
{
    ImplHookDX11_Init(hModule, FindWindow((L"UnrealWindow"), (L"Fortnite  ")));

    return S_OK;
}


BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)MainThread, hModule, NULL, NULL);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}