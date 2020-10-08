#include <iostream>
#include "TXLib.h"
using namespace std;
int color[3];

void Tree( float x, float y, float L, float angle, int levels)
{
    if ( levels <= 0 ) return;
    color[0] = color[0] + 10;
    if (color[0] > 255) color[1] = color[1] + 20;
    if (color[1] > 255) color[2] = color[2] + 30;
    const float k = 0.7;
    const float angle1 = angle - 60;
    const float angle2 = angle + 60;
    float x1 = x + L * cos ( angle * M_PI / 180);
    float y1 = y - L * sin ( angle * M_PI / 180);
    txSetColour(RGB(color[0], color[1], color[2]));
    txLine(x, y ,x1 , y1);
    if (rand() % 2 == 1) Tree ( x1, y1, k * L, angle, levels - 1);
    Tree ( x1, y1, k * L, angle1, levels - 1);
    Tree ( x1, y1, k * L, angle2, levels - 1);
}
int main()
{
    int i;
    cin >> i;
    color[0] = 50;
    color[1] = 20;
    color[2] = 20;
    txCreateWindow(1000, 1000);
    Tree(500, 800, 200, 90, i);
}
