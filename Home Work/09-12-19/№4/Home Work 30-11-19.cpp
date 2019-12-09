#include <iostream>
#include "TXLib.h"

int main()
{
	int x, y, R = 30, h = 60, l = 30, l1 = 35, s = 40, s1 = 30, h1 = 15, r, g, b;
	cin >> x >> y >> r >> g >> b;
	txCreateWindow (500, 500);
	txCircle (x, y, R);
	txSetColour(RGB(r, g, b))
	txLine (x, y + R, x, y + R + h);
	txLine(x, y + R + h, x - l, y + R + h + s);
	txLine(x, y + R + h, x + l, y + R + h + s);
	txLine(x, y + R + h1, x - l1, y + R + h1 + s1);
	txLine(x, y + R + h1, x + l1, y + R + h1 + s1);
}	