#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> a(1, 1);
    int max_size = 1000000, b = 0, c = 0, n = 0;
    cout << "введите число факториал которого вы хотите вычислить:)";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        
        b = 0;
        c = 0;
        for (int k = 0; k < a.size(); k++)
        {
            b = (a[k] * i + c) / max_size;
            a[k] = (a[k] * i + c) % max_size;
            c = b;
        }
        if (c != 0) a.push_back(c);
    }
    for (int i = a.size() - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
}