#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif

extern "C" __declspec(dllexport) int KeepMarkNavigatePluginVersion() {
    return 1;
}

#ifdef _WIN32
BOOL APIENTRY DllMain(HMODULE, DWORD, LPVOID) {
    return TRUE;
}
#endif
