#include <iostream>
#include "TXLib.h"
#include <cmath>
using namespace std;
int x_m = 350, y_m = 350, h = 30, l = 20, x_s = 50, y_s = 50, N = 0, n = 1;
void Draw_main_person()
{
	
}
void Control_main_person()
{
<<<<<<< HEAD
	
=======
	if (GetAsyncKeyState(VK_LEFT)) {x_m -= 5; n = 4;}
	if (GetAsyncKeyState(VK_RIGHT)) {x_m += 5; n = 2;}
	if (GetAsyncKeyState(VK_DOWN)) {y_m += 5; n = 3;}
	if (GetAsyncKeyState(VK_UP)) {y_m -= 5; n = 1;}
	if (GetAsyncKeyState(VK_SPACE)) N += 1;
	if (x_m > 719) x_m = -19;
	else if (x_m < -19) x_m = 719;
	if (y_m > 729) y_m = -29;
	else if (y_m < -29) y_m = 729;
>>>>>>> bcb2202cd090e2d3268c8d9430827d2eea1800e1
}
void Draw_stalker_person()
{
	
}
void Control_stalker_person()
{
	
}
void drawball()
{
    int x_b, y_b;
}
int main()
{
	txCreateWindow(700, 700);
	while (true)
	{
		txSetFillColor(TX_WHITE);
		txClear();
<<<<<<< HEAD

		txSetColor(TX_BLACK);
		txSetFillColor(RGB(0, 255, 0));
		txRectangle(x_m - l, y_m - h, x_m + l, y_m + h);

		if (GetAsyncKeyState(VK_LEFT)) x_m -= 5;
		if (GetAsyncKeyState(VK_RIGHT)) x_m += 5;
		if (GetAsyncKeyState(VK_DOWN)) y_m += 5;
		if (GetAsyncKeyState(VK_UP)) y_m -= 5;
		if (x_m > 719) x_m = -19;
		else if (x_m < -19) x_m = 719;
		if (y_m > 729) y_m = -29;
		else if (y_m < -29) y_m = 729;

		txSetColor(TX_BLACK);
		txSetFillColor(RGB(255, 0, 0));
		txRectangle(x_s - l, y_s - h, x_s + l, y_s + h);
		
		if (x_s - x_m < 0) x_s += 5;
		else if (x_s - x_m > 0) x_s -= 5;
		if (y_s - y_m < 0) y_s += 5;
		else if (y_s - y_m > 0) y_s -= 5;
		
=======
		Draw_main_person();
		Control_main_person();
		Draw_stalker_person();
		Control_stalker_person();
>>>>>>> bcb2202cd090e2d3268c8d9430827d2eea1800e1
		Sleep(50);
		if (GetAsyncKeyState(VK_ESCAPE)) break;
	}
}
