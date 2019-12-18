#include <iostream>
#include "TXLib.h"
#include <cmath>
using namespace std;
int x_m = 350, y_m = 350, h = 30, l = 20, x_s = 50, y_s = 50, N = 0, n = 1;
void Draw_main_person()
{
	txSetColor(TX_BLACK);
    txSetFillColor(RGB(0, 255, 0));
    txRectangle(x_m - l, y_m - h, x_m + l, y_m + h);
}
void Control_main_person()
{
	if (GetAsyncKeyState(VK_LEFT)) {x_m -= 5; n = 4;}
	if (GetAsyncKeyState(VK_RIGHT)) {x_m += 5; n = 2;}
	if (GetAsyncKeyState(VK_DOWN)) {y_m += 5; n = 3;}
	if (GetAsyncKeyState(VK_UP)) {y_m -= 5; n = 1;}
	if (GetAsyncKeyState(VK_SPACE)) N += 1;
	if (x_m > 719) x_m = -19;
	else if (x_m < -19) x_m = 719;
	if (y_m > 729) y_m = -29;
	else if (y_m < -29) y_m = 729;
}
void Draw_stalker_person()
{
	txSetColor(TX_BLACK);
    txSetFillColor(RGB(255, 0, 0));
    txRectangle(x_s - l, y_s - h, x_s + l, y_s + h);
}
void Control_stalker_person()
{
	if (x_s - x_m < 0) x_s += 5;
    else if (x_s - x_m > 0) x_s -= 5;
    if (y_s - y_m < 0) y_s += 5;
    else if (y_s - y_m > 0) y_s -= 5;
}
int main()
{
	txCreateWindow(700, 700);
	while (true)
	{
		txSetFillColor(TX_WHITE);
		txClear();
		Draw_main_person();
		Control_main_person();
		Draw_stalker_person();
		Control_stalker_person();
		Sleep(50);
		if (GetAsyncKeyState(VK_ESCAPE)) break;
	}
}
