#include <iostream>
#include "TXLib.h"
int main()
{
	int x = 500, y = 500, h, l;
	txCreateWindow(1000, 1000);
	txClear();
	txSetColor(TX_BLACK);
	txRectangle(x - 20, y - 20, x + 20, y + 20);

}