#include <windows.h>

BOOL APIENTRY DllMain(
    HMODULE hModule,
    DWORD reason,
    LPVOID reserved
)
{
    return TRUE;
}

extern "C" __declspec(dllexport)
int Add(int a, int b)
{
    return a + b;
}
