#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float x, y;
    cin>>x >>y;
    if ((pow(x, 2) + pow(y, 2) < 1)and((y > -x)or(y < x))) cout<< "попадает";
    else cout<< "не попадает";
}

