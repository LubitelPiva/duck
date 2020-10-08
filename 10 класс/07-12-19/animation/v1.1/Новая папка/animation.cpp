#include <iostream>
#include "TXLib.h"
using namespace std;

int main()
{
	int x = 350, y = 350, h = 30, l = 20;
	txCreateWindow(700, 700);
	while (true)
	{
		txSetFillColor(TX_WHITE);
		txClear();
		txSetColor(TX_BLACK);
		txSetFillColor(RGB(0, 255, 0));
		txRectangle(x - l, y - h, x + l, y + h);
		if (GetAsyncKeyState(VK_ESCAPE)) break;
		if (GetAsyncKeyState(VK_LEFT)) x -= 5;
		if (GetAsyncKeyState(VK_RIGHT)) x += 5;
		if (GetAsyncKeyState(VK_DOWN)) y += 5;
		if (GetAsyncKeyState(VK_UP)) y -= 5;
		if (x > 719) x = -19;
		else if (x < -19) x = 719;
		if (y > 729) y = -29;
		else if (y < -29) y = 729;
		Sleep(50);
	}
}