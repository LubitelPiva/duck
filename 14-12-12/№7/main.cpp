#include <iostream>

using namespace std;

int main()
{
    int N, f1, f2, f3;
    cin >> N;
    f1 = 1;
    f2 = 1;
    f3 = 2;
    for (int i = 0; i < N; i++)
    {
        cout << f1 << " ";
        f1 = f2;
        f2 = f3;
        f3 = f2 + f1;
    }

}
