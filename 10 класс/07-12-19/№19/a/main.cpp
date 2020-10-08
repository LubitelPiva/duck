#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x, y;
    cin>>x >>y;
    if (y<1) cout<< "попадает";
    else cout<< "не попадает";
}
