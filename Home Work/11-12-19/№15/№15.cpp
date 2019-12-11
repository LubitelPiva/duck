#include <iostream>
using namespace std;
int x;
void math_16()
{
    if (x == 10) cout << 'A';
    else if (x == 11) cout << 'B';
    else if (x == 12) cout << 'C';
    else if (x == 13) cout << 'D';
    else if (x == 14) cout << 'E';
    else if (x == 15) cout << 'F';
    else cout << x;
}
int main()
{
    int a;
    cin >> a;
    x = a / 16;
    math_16();
    x = a % 16;
    math_16();
}