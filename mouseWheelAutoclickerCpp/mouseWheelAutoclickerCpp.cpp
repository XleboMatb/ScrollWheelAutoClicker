// mouseWheelAutoclickerCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include "AsyncScrollDetect.h"

using namespace std;
WNDPROC wndProc;

int main()
{
	int delta = 0;
	while (true)
	{
		delta = GetScrollDelta();
		if (delta == -1)
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
			mouse_event(MOUSEEVENTF_LEFTUP , 0, 0, 0, 0);
		}
	}
}