#include <iostream>

using namespace std;

int NOD(int a, int b)
{
    if (a == 0 or b == 0)
        return a + b;
    else return NOD(b, a % b);
}
int NOK(int a, int b)
{
    return (a * b) / NOD(a, b);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << NOK(a, b);
}
