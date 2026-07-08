#pragma once
#pragma warning( disable: 4152 )
#pragma warning( disable: 4201 )

#include <Windows.h>
#include <iostream>
#include <cmath>
#include <thread>
#include <math.h>
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "gdi32.lib")
#define M_PI 3.14159265358979323846

#include "color.h"
#include "cursors.h"
#include "sound.h"
#include "effects.h"

#pragma region Public Variables
extern HWND hwndDesktop;
extern HDC hdcDesktop;
extern RECT rcScrBounds;
extern HHOOK hMsgHook;
extern INT nCounter;
#pragma endregion Public Variables