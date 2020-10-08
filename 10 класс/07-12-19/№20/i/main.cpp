#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float x, y;
    cin>>x >>y;
    if ((y < 1)and(x > 0)and((y > x - 1)or(pow(x, 2) + pow(y, 2) < 1))) cout<< "попадает";
    else cout<< "не попадает";
}
