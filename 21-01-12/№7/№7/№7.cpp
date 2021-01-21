#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

int max_size = 1000000;

int my_math(int a, char b, int c)
{
    if (b == '*')
    {
        return a * c;
    }
    else if (b == '/')
    {
        return a / c;
    }
    else if (b == '+')
    {
        return a + c;
    }
    else if (b == '-')
    {
        return a - c;
    }
}

vector <int> big_number(vector <int> a, char sign, int num)
{
    int b = 0, c = 0;
    for (int k = 0; k < a.size(); k++)
    {
        b = (my_math(a[k], sign, num) + c) / max_size;
        a[k] = (my_math(a[k], sign, num) + c) % max_size;
        c = b;
    }
    if (c != 0) a.push_back(c);
    return a;
}

void print_number(vector <int> a)
{
    cout << a[a.size() - 1];
    for (int i = a.size() - 2; i > -1; i--)
    {
        int m = max_size / 10;
        while (m > 0)
        {
            cout << a[i] / m;
            a[i] = a[i] % m;
            m = m / 10;
        }
    }
}

int main()
{
    unsigned __int64 old = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    vector <int> a(1, 1);
    for (int i = 1; i < 101; i++)
    {
        a = big_number(a, '*', i);
    }
    print_number(a);
    unsigned __int64 now = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    return now - old;
}
