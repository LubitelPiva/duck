#include <iostream>
#include "TXLib.h"
using namespace std;
void drawCarBody()
{
	POINT carBody[8] = {{x+5, y+50}, {x+5, y+25},
						{x+15, y+25}, {x+45, y+5},
						{x+85, y+5}, {x+115, y+25},
						{x+165, y+50} };
	txSetFillColor( RGB(r, g, b) );
	txPolygon( carBody, 7);
}
void drawCarWindows()
{
	txSetFillColor( RGB(55,55,55));
	POINT backWindow[4] = {{x+25, y+25}, {x+50, y+10},
						   {x+55, y+10}, {x+55,y+25}};
	txPolygon(backWindow, 4 );
	POINT frontWindow[4] = {{x+60, y+10}, {x+80, y+10},
							{x+105, y+25}, {x+60, y+25}};
	txPolygon( frontWindow, 4);
}
void drawCarWheels()
{
	txSetFillColour( RGB(0,0,0) );
	txCircle( x+35, y+50, 13 );
	txCircle( x+105, y+50, 13 );
}
int main()
{
	int x, y, r ,g, b;
	cin>> x >> y >> r >> g >> b;
	txCreateWindow( 500, 400 );
	txSetFillColour(RGB(255,255,255));
	POINT WindowColor[4] = {{0,0},{500,0},{500,500},{0,500}};
	txPolygon(WindowColor, 4);
	txSetColor(RGB(0,0,0));
	drawCarBody();
	drawCarWindows();
	drawCarWheels();
}
