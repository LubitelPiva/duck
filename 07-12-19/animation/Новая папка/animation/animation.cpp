#include <iostream>
#include "TXLib.h"
using namespace std;

int main()
{
	int x = 50, y = 50, h = 30, l = 20;
	txCreateWindow(700, 700);
	txSetColor(TX_BLACK);
	txRectangle(x - l, y - h, x + l, y + h);
}