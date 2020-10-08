#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector <int> a (112, 0);
    queue <int> b;
    int c, max1 = 0, max2 = 0;
    cin >> c;
    b.push(c);
    cin >> c;
    b.push(c);
    cin >> c;
    b.push(c);
    cin >> c;
    b.push(c);
    for (int i = 0; i < N - 4; i++)
    {
        c = b.front();
        if (c > a[c % 112])
            a[c % 112] = c;
        cin >> c;
        b.push(c);
        b.pop();
        if (a[(112 - c % 112) % 112] + c > max1 and a[(112 - c % 112) % 112] != 0 and a[(112 - c % 112) % 112] > c)
        {
            max1 = a[(112 - c % 112) % 112] + c;
            max2 = c;
        }
    }
    cout << max1<< endl<< max1 - max2<< ' '<< max2;
}
