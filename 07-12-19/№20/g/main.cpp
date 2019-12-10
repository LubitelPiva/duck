#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float x, y;
    cin>>x >>y;
    if ((y > 1 - x)and((x > 0)and(x < 1)or(x < 0)and(y > 2 * pow(x, 2)))) cout<< "попадает";
    else cout<< "не попадает";
}
