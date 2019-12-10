#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    cout << a / 64 << (a / 8) % 8 << a % 8;
}