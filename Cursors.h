#include "Monoxide.h"

DWORD WINAPI CursorDraw(LPVOID lpParam) {
    UNREFERENCED_PARAMETER(lpParam);

    RECT rect;
    GetWindowRect(GetDesktopWindow(), &rect);
    
    int w = rect.right - rect.left;
    int h = rect.bottom - rect.top;

    HDC hdcDesktop = GetDC(GetDesktopWindow());

    for (int t = 0;; t++)
    {
        CURSORINFO curInf = { sizeof(CURSORINFO) };

        if (GetCursorInfo(&curInf) && curInf.hCursor)
        {
            int spawnCount = (rand() % 6) + 1;

            for (int i = 0; i < spawnCount; i++)
            {
                int x = rand() % (w - GetSystemMetrics(SM_CXCURSOR) + 1);
                int y = rand() % (h - GetSystemMetrics(SM_CYCURSOR) + 1);

                DrawIcon(hdcDesktop, x, y, curInf.hCursor);
            }

            DestroyCursor(curInf.hCursor);
        }

        Sleep(rand() % 8 + 3);
    }

    ReleaseDC(GetDesktopWindow(), hdcDesktop);
    return 0;
}