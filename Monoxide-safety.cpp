#include "Monoxide.h"

VOID WINAPI Initialize(VOID) {
	HMODULE hModUser32 = LoadLibraryW(L"user32.dll");
	BOOL(WINAPI * SetProcessDPIAware)(VOID) = (BOOL(WINAPI*)(VOID))GetProcAddress(hModUser32, "SetProcessDPIAware");
	if (SetProcessDPIAware) SetProcessDPIAware();
	FreeLibrary(hModUser32);
}

INT WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pszCmdLine, INT nShowCmd) {
    UNREFERENCED_PARAMETER(hInstance); UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(pszCmdLine); UNREFERENCED_PARAMETER(nShowCmd);

    Initialize();

	if (MessageBoxW(NULL, L"Monoxide-safety2.0.exe\r\n\r\nThis program contains GDI effects.", L"Monoxide2.0-safety.exe", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
	{
		ExitProcess(0);
	}
	else
	{
		if (MessageBoxW(NULL, L"FINAL WARNING\r\n\r\nThis is the last time can stop this program from running\r\nStill continue?", L"Monoxide2.0-safety.exe", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
		{
			ExitProcess(0);
		}
		else


			Sleep(5000);
			CreateThread(0, 0, Refresh, 0, 0, 0);
			CreateThread(0, 0, CursorDraw, 0, 0, 0);
			HANDLE P1 = CreateThread(0, 0, wef, 0, 0, 0);
			sound1();
			Sleep(5000);
			TerminateThread(P1, 0);
			CloseHandle(P1);
			HANDLE P2 = CreateThread(0, 0, shader1, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P2, 0);
			CloseHandle(P2);
			HANDLE P3 = CreateThread(0, 0, beziers, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P3, 0);
			CloseHandle(P3);
			HANDLE P4 = CreateThread(0, 0, shader2, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P4, 0);
			CloseHandle(P4);
			HANDLE P5 = CreateThread(0, 0, shader3, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P5, 0);
			CloseHandle(P5);
			HANDLE P6 = CreateThread(0, 0, train, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P6, 0);
			CloseHandle(P6);
			HANDLE P7 = CreateThread(0, 0, shader4, 0, 0, 0);
			sound2();
			Sleep(5000);
			TerminateThread(P7, 0);
			CloseHandle(P7);
			HANDLE P8 = CreateThread(0, 0, shader5, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P8, 0);
			CloseHandle(P8);
			HANDLE P9 = CreateThread(0, 0, shader6, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P9, 0);
			CloseHandle(P9);
			HANDLE P10 = CreateThread(0, 0, WeirdInvert, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P10, 0);
			CloseHandle(P10);
			HANDLE P11 = CreateThread(0, 0, patblt, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P11, 0);
			CloseHandle(P11);
			HANDLE P12 = CreateThread(0, 0, WeridInvertShake, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P12, 0);
			CloseHandle(P12);
			HANDLE P13 = CreateThread(0, 0, shader7, 0, 0, 0);
			sound3();
			Sleep(5000);
			TerminateThread(P13, 0);
			CloseHandle(P13);
			HANDLE P14 = CreateThread(0, 0, shader8, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P14, 0);
			CloseHandle(P14);
			HANDLE P15 = CreateThread(0, 0, shader9, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P15, 0);
			CloseHandle(P15);
			HANDLE P16 = CreateThread(0, 0, shader10, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P16, 0);
			CloseHandle(P16);
			HANDLE P17 = CreateThread(0, 0, MoveScreenInvert, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P17, 0);
			CloseHandle(P17);
			HANDLE P18 = CreateThread(0, 0, shader11, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P18, 0);
			CloseHandle(P18);
			HANDLE P19 = CreateThread(0, 0, shader12, 0, 0, 0);
			sound4();
			Sleep(5000);
			TerminateThread(P19, 0);
			CloseHandle(P19);
			HANDLE P20 = CreateThread(0, 0, shader13, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P20, 0);
			CloseHandle(P20);
			HANDLE P21 = CreateThread(0, 0, textout1, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P21, 0);
			CloseHandle(P21);
			HANDLE P22 = CreateThread(0, 0, shader14, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P22, 0);
			CloseHandle(P22);
			HANDLE P23 = CreateThread(0, 0, shader15, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P23, 0);
			CloseHandle(P23);
			HANDLE P24 = CreateThread(0, 0, shader16, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P24, 0);
			CloseHandle(P24);
			HANDLE P25 = CreateThread(0, 0, shader17, 0, 0, 0);
			sound5();
			Sleep(5000);
			TerminateThread(P25, 0);
			CloseHandle(P25);
			HANDLE P26 = CreateThread(0, 0, shader18, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P26, 0);
			CloseHandle(P26);
			HANDLE P27 = CreateThread(0, 0, sharpen, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P27, 0);
			CloseHandle(P27);
			HANDLE P28 = CreateThread(0, 0, BitBlt1, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P28, 0);
			CloseHandle(P28);
			HANDLE P29 = CreateThread(0, 0, shader19, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P29, 0);
			CloseHandle(P29);
			HANDLE P30 = CreateThread(0, 0, shader20, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P30, 0);
			CloseHandle(P30);
			HANDLE P31 = CreateThread(0, 0, shader21, 0, 0, 0);
			sound6();
			Sleep(5000);
			TerminateThread(P31, 0);
			CloseHandle(P31);
			HANDLE P32 = CreateThread(0, 0, shader22, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P32, 0);
			CloseHandle(P32);
			HANDLE P33 = CreateThread(0, 0, shader23, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P33, 0);
			CloseHandle(P33);
			HANDLE P34 = CreateThread(0, 0, TextOut, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P34, 0);
			CloseHandle(P34);
			HANDLE P35 = CreateThread(0, 0, shader24, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P35, 0);
			CloseHandle(P35);
			HANDLE P36 = CreateThread(0, 0, FinalPayload, 0, 0, 0);
			Sleep(5000);
			TerminateThread(P36, 0);
			CloseHandle(P36);
	}
}