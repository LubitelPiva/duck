#include <iostream>

using namespace std;
int issimple(int x)
{
    int n = 0;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0) return 0;
    }
    return 1;
}
int main()
{
    int x, n, a = 0;
    cin >> n;
    for (int k = 0; k <  n; k++)
    {
        cin >> x;
        a += issimple(x);
    }
    cout << a;}

