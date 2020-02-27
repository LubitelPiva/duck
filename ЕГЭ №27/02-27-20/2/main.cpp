#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    vector <int> a (8, 0);
    queue <int> b;
    int n = 0, d, c;
    cin >> d;
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        b.push(x);
    }
    for (int i = 0; i < d - 4; i++)
    {
        c = b.front();
        b.pop();
        a[c % 8]++;
        cin >> c;
        n += a[(8 - c % 8) % 8];
        b.push(c);
        /*cin >> c;
        n += a[(8 - c % 8) % 8][0];
        a[c % 8][4]++;
        for (int j = 0; j < 8; j++)
        {
            a[j][0] += a[j][1];
            a[j][1] = a[j][2];
            a[j][2] = a[j][3];
            a[j][3] = a[j][4];
            a[j][4] = 0;
        }*/
    }
    cout << n;
}
