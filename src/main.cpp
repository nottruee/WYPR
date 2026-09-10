#include <windows.h>

BOOL APIENTRY DllMain(
    HMODULE hModule,
    DWORD reason,
    LPVOID reserved
)
{
    if (reason == DLL_PROCESS_ATTACH)
    {
        MessageBoxA(
            nullptr,
            "WYPR.dll loaded successfully!",
            "WYPR",
            MB_OK | MB_ICONINFORMATION
        );
    }

    return TRUE;
}

extern "C" __declspec(dllexport)
int Add(int a, int b)
{
    return a + b;
}
