#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float x, y;
    cin>>x >>y;
    if ((y < sin(x))and(y > 0)and(y < 0.5)) cout<< "попадает";
    else cout<< "не попадает";
}
