#include "stdafx.h"

int main()
{
	MH_Initialize();

	if (Render::Menu::Initial())
	{
		return 0;
	}
}

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved)
{
	if (reason == DLL_PROCESS_ATTACH) 
	{
		main();
	}

	return TRUE;
}