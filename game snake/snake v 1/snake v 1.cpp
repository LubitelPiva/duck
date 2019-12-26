#include <iostream>
#include "TXLib.h"
using namespace std;
class snake 
{
public:
	void print_squb()
	{
		txSetFillColor(RGB(0, 255, 0));
		txRectangle(x - 20, y - 20, x + 20, y + 20);
	}
	void Control_snake()
	{
		if (GetAsyncKeyState(VK_UP)) y -= 40;
		else if (GetAsyncKeyState(VK_RIGHT)) x += 40;
		else if (GetAsyncKeyState(VK_DOWN)) y += 40;
		else if (GetAsyncKeyState(VK_LEFT)) x -= 40;
		while (GetAsyncKeyState(VK_UP) || GetAsyncKeyState(VK_RIGHT) || GetAsyncKeyState(VK_DOWN) || GetAsyncKeyState(VK_LEFT)) {}
	}
private:
	int x = 300;
	int y = 300;
};
/*void print_apple(int x, int y)
{
	txSetFillColor(RGB(255, 0, 0));
	txRectangle(x - 15, y - 15, x + 15, y + 15);
}*/
int main()
{
	int win_h = 600, win_l = 600, x = 360, y = 360, N = 1;
	while (!GetAsyncKeyState(VK_RETURN)) {}
	txCreateWindow(win_h, win_l);
	snake a;
	while (true)
	{
		if (GetAsyncKeyState(VK_ESCAPE)) break;
		txSetFillColor(RGB(255, 255, 255));
		txClear();
		a.print_squb();
		a.Control_snake();
		Sleep(50);
	}
}