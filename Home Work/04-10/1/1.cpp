#include <iostream>
#include <cmath>

int h = 2, S = 10, v = 12;

using namespace std;

float f(float a)
{
    return S * sin(a) / cos(a) - 9.81 * S * S / (v * v * cos(a) * cos(a)) - h;
}

int main()
{
    float pi = 3.1415926, a = 0, delta = 0.000001 * pi;
    while (a < pi / 2)
    {
        if (f(a) * f(a + delta) <= 0)
            cout << (a + delta) * 180 / pi;
        a += delta;
    }
}
