#include <iostream>
using namespace std;

char math_16(int x)
{
    if (x < 10) {
        return char('0' + x);
    } else {
        return char('A' + x - 10);
    }

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
    int x;
    int a;
    cin >> a;
    cout << math_16(a / 16) << math_16(a % 16);
    return 0;
    x = a / 16;


    math_16();
    x = a % 16;
    math_16();
}
