#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int N, k = 0, c, maxs = 0;
    cin >> N;
    vector <int> a(3, 0);
    queue <int> b;
    for (int i = 0; i < N; i++)
    {
        cin >> c;
        if (c != 0)
        {
            b.push(c);
            k++;
            if (c + a[(3 - c % 3) % 3] > maxs)
                maxs = c + a[(3 - c % 3) % 3];
        }
        else
        {
            for (int q = 0; q < k; q++)
            {
                if (b.front() > a[b.front() % 3])
                    a[b.front() % 3] = b.front();
                b.pop();
            }
            k = 0;
        }
    }
    cout << maxs;
}
