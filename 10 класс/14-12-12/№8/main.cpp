#include <iostream>

using namespace std;
int fib(int a)
{
    int f1 = 1, f2 = 1, f3 = 2;
    while (f1 <= a)
    {
        if (a == f1) return 1;
        f1 = f2;
        f2 = f3;
        f3 = f2 + f1;
    }
    return 0;
}
int main()
{
    int n, a, N = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        N += fib(a);
    }
    cout << N;
}
