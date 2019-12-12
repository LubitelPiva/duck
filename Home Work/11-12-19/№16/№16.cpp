#include <iostream>
using namespace std;
int sixten(char a)
{
    if (a < 10) return (a);
    else return (a - 'A' + 10);
}
int main()
{
    char a, b;
    int c = 0;
    cin >> a >> b;
    c += sixten(a) * 16 + sixten(b);
    cout << c;
}
