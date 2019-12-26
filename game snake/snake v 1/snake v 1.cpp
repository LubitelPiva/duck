#include <iostream>
#include "TXLib.h"
using namespace std;
int N = 4;
class snake
{
public:
    snake ()
    {
        x = 20;
        y = 20;
    }
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
	void SetX (int Setx)
	{
	    x = Setx;
	}
	void SetY (int Sety)
	{
	    y = Sety;
	}
	int GetX ()
	{
	    return x;
	}
	int GetY ()
	{
	    return y;
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
	int win_h = 600, win_l = 600, x = 360, y = 360;
	while (!GetAsyncKeyState(VK_RETURN)) {}
	txCreateWindow(win_h, win_l);
	snake All[N];
	while (true)
	{
		if (GetAsyncKeyState(VK_ESCAPE)) break;
		for (int i = 0; i < N; i++)
        {
            All[i].print_squb();
        }
		if (GetAsyncKeyState(VK_UP) || GetAsyncKeyState(VK_RIGHT) || GetAsyncKeyState(VK_DOWN) || GetAsyncKeyState(VK_LEFT))
        {
            for (int i = 1; i < N; i++)
            {
                All[i].SetX(All[i - 1].GetX());
                All[i].SetY(All[i - 1].GetY());
            }
            All[0].Control_snake();
        }
        txSetFillColor(RGB(255, 255, 255));
		txClear();
		Sleep(50);
	}
}
/*void go_snake(snake &All)
	{
	    if (GetAsyncKeyState(VK_UP) || GetAsyncKeyState(VK_RIGHT) || GetAsyncKeyState(VK_DOWN) || GetAsyncKeyState(VK_LEFT))
        {
            for (int i = 1; i < N; i++)
            {
                All[i].SetX(snake[i-1].GetX());
                All[i].SetY(snake[i-1].GetY());
            }
            All[0].Control_snake();
        }
	}
*/
