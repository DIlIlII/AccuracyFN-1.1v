/*

        AccuracyFN Source Leak

        Credits: Maximus#6769

*/

#include "stdafx.h"
#include <Windows.h>


VOID Main()
{
    MH_Initialize();

    SettingsHelper::LoadDefaultConfig();

    if (!Util::Initialize()) {
        return;
    }

    if (!offsets::Initialize()) {
        return;
    }
    if (!hooks::Initialize()) {
        return;
    }

    if (!rend::Initialize()) {
        return;
    }
}



BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved) {
   
    // Auth::HasProperRegistry(false, "86-Cheats.cc");

    if (reason == DLL_PROCESS_ATTACH) {
       Main();
    }

    return TRUE;
}