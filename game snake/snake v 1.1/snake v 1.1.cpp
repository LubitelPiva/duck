#include <iostream>
#include "TXLib.h"
using namespace std;
int N = 2;
class snake
{
public:
	snake()
	{
		x = 20;
		y = 20;
	}
	snake(int Setx, int Sety)
	{
		x = Setx;
		y = Sety;
	}
	void print_squb()
	{
		txSetFillColor(RGB(0, 255, 0));
		txRectangle(x - 20, y - 20, x + 20, y + 20);
	}
	void print_squb_heat()
	{
		txSetFillColor(RGB(0, 255, 0));
		txRectangle(x - 20, y - 20, x + 20, y + 20);
		txSetFillColor(RGB(0, 0, 0));
		txRectangle(x - 10, y - 10, x - 2, y - 2);
		txRectangle(x + 2, y - 10, x + 10, y - 2);
	}
	void Control_snake()
	{
		if (GetAsyncKeyState(VK_UP)) y -= 40;
		else if (GetAsyncKeyState(VK_RIGHT)) x += 40;
		else if (GetAsyncKeyState(VK_DOWN)) y += 40;
		else if (GetAsyncKeyState(VK_LEFT)) x -= 40;
		while (GetAsyncKeyState(VK_UP) || GetAsyncKeyState(VK_RIGHT) || GetAsyncKeyState(VK_DOWN) || GetAsyncKeyState(VK_LEFT)) {}
	}
	void SetX(int Setx)
	{
		x = Setx;
	}
	void SetY(int Sety)
	{
		y = Sety;
	}
	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;
	}
private:
	int x = 0;
	int y = 0;
};
void print_apple(int x, int y)
{
	txSetFillColor(RGB(255, 0, 0));
	txRectangle(x - 10, y - 10, x + 10, y + 10);
}
void XY_apple(int& x_apple, int& y_apple, int& win_l, int& win_h)
{
	x_apple = (rand() % (win_l / 40)) * 40 + 20;
	y_apple = (rand() % (win_h / 40)) * 40 + 20;
}
int main()
{
	int win_h = 600, win_l = 600, x = 360, y = 360, x_apple = 0, y_apple = 0, pixe = 0, wile = 0, end = 0;

	while (!GetAsyncKeyState(VK_RETURN)) {}

	txCreateWindow(win_h, win_l);
	snake All[226];
	All[0].SetY(300);
	All[0].SetX(300);
	All[1].SetY(340);
	All[1].SetX(300);
	All[225].SetY(300);
	All[225].SetX(300);
	XY_apple(x_apple, y_apple, win_l, win_h);

	while (true)
	{
		if (GetAsyncKeyState(VK_ESCAPE)) break;
		txSetFillColor(RGB(255, 255, 255));
		txClear();
		All[0].print_squb_heat();
		for (int i = 1; i < N; i++)
		{
			All[i].print_squb();
		}

		print_apple(x_apple, y_apple);
		if (GetAsyncKeyState(VK_UP) || GetAsyncKeyState(VK_RIGHT) || GetAsyncKeyState(VK_DOWN) || GetAsyncKeyState(VK_LEFT))
		{
			All[225].Control_snake();
			if (x_apple == All[225].GetX() && y_apple == All[225].GetY())
			{
				N += 1;
				XY_apple(x_apple, y_apple, win_l, win_h);
				wile = 0;

				while (wile == 0)
				{
					pixe = 0;

					for (int i = 0; i < N; i++)
					{
						if (All[i].GetX() == x_apple && All[i].GetY() == y_apple)
						{
							pixe = 1;
							break;
						}
					}
					if (pixe == 0) wile = 1;
					else XY_apple(x_apple, y_apple, win_l, win_h);
				}

			}

			for (int i = 1; i < N; i++)
			{
				All[N - i].SetX(All[N - i - 1].GetX());
				All[N - i].SetY(All[N - i - 1].GetY());
			}

			All[0].SetX(All[225].GetX());
			All[0].SetY(All[225].GetY());
		}

		for (int i = 1; i < N; i++)
		{
			if (All[i].GetX() == All[0].GetX() && All[i].GetY() == All[0].GetY())
			{
				end = 1;
				break;
				cout << end;
			}
		}

		if (All[0].GetY() < 0 || All[0].GetY() > win_h || All[0].GetX() < 0 || All[0].GetX() > win_l || end == 1) break;
		Sleep(50);
	}
}