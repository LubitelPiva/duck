#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float x, y;
    cin>>x >>y;
    if ((y < 2 - pow(x, 2))and((y > 0)or(y > x))) cout<< "попадает";
    else cout<< "не попадает";
}
