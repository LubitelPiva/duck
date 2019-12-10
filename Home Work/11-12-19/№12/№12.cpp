#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    a = a / 10000 * 16 + a / 1000 % 10 * 8 + a / 100 % 10 * 4 + a / 10 % 10 * 2 + a % 10;
    cout << a;
}