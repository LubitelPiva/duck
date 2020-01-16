#include <iostream>
#include <cmath>

using namespace std;

bool isAuto (int& a)
{
    int k = a, n = 10;
    for (;k != 0; n *= 10)
    {
        k /= 10;
    }
    n /= 10;
    return (a * a % n == a);
}
int main()
{
    int a;
    cin >> a;
    cout << endl << isAuto(a);
}
