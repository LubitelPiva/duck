#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, n, minn = 12000;
    vector <int> a(144, 12000);
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> n;
        if (n + a[(144 - n % 144) % 144] < minn + a[(144 - minn % 144) % 144] and n < a[(144 - n % 144) % 144])
            minn = n;
        if (n < a[n % 144])
            a[(144 - n % 144) % 144] = n;
    }
    if (a[(144 - minn % 144) % 144] == 12000)
        cout << 0;
    else
    {
        cout << minn;
        cout << a[(144 - minn % 144) % 144];
    }
}
