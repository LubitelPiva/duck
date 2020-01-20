#include <iostream>
#include "TXLib.h"
#include <string>
#include <sstream>
using namespace std;
int N = 1, a = 50;
class snake
{
public:
	snake()
	{
		x = a / 2;
		y = a / 2;
	}
	snake(int Setx, int Sety)
	{
		x = Setx;
		y = Sety;
	}
	void print_squb()
	{
	    txSetColor(TX_BLACK, 1);
		txSetFillColor(RGB(0, 255, 0));
		txRectangle(x - a / 2, y - a / 2, x + a / 2, y + a / 2);
	}
	void print_squb_heat(int turn)
	{
	    txSetColor(TX_BLACK, 1);
		txSetFillColor(RGB(0, 255, 0));
		txRectangle(x - a / 2, y - a / 2, x + a / 2, y + a / 2);
		txSetColor(TX_WHITE, 2);
		txSetFillColor(RGB(0, 0, 0));
		if (turn == 2 || turn == 3) txRectangle(x - 10, y - 10, x - 2, y - 2);
		if (turn == 3 || turn == 4) txRectangle(x + 2, y - 10, x + 10, y - 2);
		if (turn == 1 || turn == 4) txRectangle(x + 2, y + 2, x + 10, y + 10);
		if (turn == 1 || turn == 2) txRectangle(x - 10, y + 2, x - 2, y + 10);
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
    txSetColor(TX_BLACK, 1);
	txSetFillColor(RGB(255, 0, 0));
	txRectangle(x - 10, y - 10, x + 10, y + 10);
}
void XY_apple(int& x_apple, int& y_apple, int win_l, int win_h)
{
	x_apple = (rand() % win_l) * a + a / 2;
	y_apple = (rand() % win_h) * a + a / 2;
}
void heat_snake_control(int& turn, int old_turn, int speed, int time)
{
	/*if (GetAsyncKeyState(VK_UP) and old_turn != 3)
	{
		turn = 1;
	}
	else if (GetAsyncKeyState(VK_RIGHT) and old_turn != 4)
	{
		turn = 2;
	}
	else if (GetAsyncKeyState(VK_DOWN) and old_turn != 1)
	{
		turn = 3;
	}
	else if (GetAsyncKeyState(VK_LEFT)  and old_turn != 2)
	{
		turn = 4;
	}*/
	if (GetAsyncKeyState(VK_UP) and old_turn != 3)
	{
		turn = 1;
	}
	else if (time % (speed * 15) == speed - 1)
	{
		turn = 3;
	}
	else if (time % speed == 1)
	{
		turn = 2;
	}
	else if (GetAsyncKeyState(VK_LEFT)  and old_turn != 2)
	{
		turn = 4;
	}
}
void Control_snake(int& turn, int& x, int& y, int win_h, int win_l)
{
	if (turn == 1) y -= a;
	else if (turn == 2) x += a;
	else if (turn == 3) y += a;
	else if (turn == 4) x -= a;
	if ( x > win_l * a) x = a / 2;
	if ( x < 0) x = win_l * a - a / 2;
	//cout << x << endl;
	if ( y > win_h * a) y = a / 2;
	else if ( y < 0) y = win_h * a - a / 2;
}
int main()
{
	int x = 275, y = 325, x_apple = 0, y_apple = 0, pixe = 0, wile = 0, end = 0, turn = 1, time = 1, speed, start_speed, old_turn = 1;
	const int win_h = 15, win_l = 15;
	int world[win_h][win_l];
	cout << "set a speed for snake and press Enter" << endl;
	cout << "recomend speed 15" << endl;
	cin >> start_speed;
	char *p_str = 0;

	for (int i = 0; i < win_l; i++) // создание массива мира
	{
		for (int k = 0; k < win_h; k++)
		{
			world[i][k] = 0;
		}
	}
	txCreateWindow(win_l * a, win_h * a);
	snake All_snake[win_l * win_h + 1];//массив змеи
	for (int i = 0; i < N; i++)//задание начальных коордитан
	{
		All_snake[i].SetY(325 + i * a);
		All_snake[i].SetX(275);
		world[5][6 + i] = 1;
	}
	All_snake[win_l * win_h + 1].SetY(325);
	All_snake[win_l * win_h + 1].SetX(275);
	XY_apple(x_apple, y_apple, win_l, win_h);
	wile = 0;

	while (wile == 0)//проверка не появилось ли яблоко в змее
	{
		pixe = 0;
		if (world[(x_apple - a / 2) / a][(y_apple - a / 2) / a] == 1)
		{
			pixe = 1;
			break;
		}
		if (pixe == 0) wile = 1;
		else XY_apple(x_apple, y_apple, win_l, win_h);
	}

	world[(x_apple - a / 2) / a][(y_apple - a / 2) / a] = 2;

	while (true)
	{
		end = 0;
		speed = start_speed - int(N / 10);
		if (GetAsyncKeyState(VK_ESCAPE)) break;// выход по escape
		txSetFillColor(RGB(255, 255, 255));
		txClear();
		All_snake[0].print_squb_heat(turn);//отрисовка головы
		for (int i = 1; i < N; i++)//отрисовка тела
		{
			All_snake[i].print_squb();
		}
		heat_snake_control(turn, old_turn, speed, time);//задание стороны поворота
		print_apple(x_apple, y_apple);//отрисовка яблока
		if (time % speed == 0)
		{
		    old_turn = turn;
			Control_snake(turn, x, y, win_h, win_l);
			if (world[(x - a / 2) / a][(y - a / 2) / a] == 2)//если наступили на яблоко, создать новое
			{
				world[(x - a / 2) / a][(y - a / 2) / a] = 1;
				N += 1;
				XY_apple(x_apple, y_apple, win_l, win_h);
				wile = 0;

				while (wile == 0)
				{
					pixe = 0;

					if (world[(x_apple - a / 2) / a][(y_apple - a / 2) / a] == 1)
					{
						pixe = 1;
					}

					if (pixe == 0) wile = 1;
					else XY_apple(x_apple, y_apple, win_l, win_h);
				}

				world[(x_apple - a / 2) / a][(y_apple - a / 2) / a] = 2;

			}
			else
			{
				world[(All_snake[N - 1].GetX() - a / 2) / a][(All_snake[N - 1].GetY() - a / 2) / a] = 0;//изменения точек змейки
				if (world[(x - a / 2) / a][(y - a / 2) / a] == 1) end = 1;//если зашла в себя
				world[(x - a / 2) / a][(y - a / 2) / a] = 1;
			}
			for (int i = 1; i < N; i++)//сдвиг всех частей змеи
			{
				All_snake[N - i].SetX(All_snake[N - i - 1].GetX());
				All_snake[N - i].SetY(All_snake[N - i - 1].GetY());
			}

			All_snake[0].SetX(x);
			All_snake[0].SetY(y);
		}

		if (end == 1) break;
		Sleep(10);
		time++;
	}
	cout << "DEAD";
}
