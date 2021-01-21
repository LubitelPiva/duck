#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cmath>
#include <chrono>

using namespace std;
using namespace std::chrono;

int max_size = 1000000;

//int simple_math(int a, char b, int c)
//{
//    if (b == '*')
//    {
//        return a * c;
//    }
//    else if (b == '/')
//    {
//        return a / c;
//    }
//    else if (b == '+')
//    {
//        return a + c;
//    }
//    else if (b == '-')
//    {
//        return a - c;
//    }
//}

bool comparison_big_number(vector <int> a, vector <int> b)
{
    if (a.size() > b.size())
        return true;
    else if (a.size() < b.size())
        return false;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (a[i] > b[i])
            return true;
        else if (a[i] < b[i])
            return false;
    }
    return false;
}

vector <int> sum_big_number(vector <int> a, vector <int> b)
{
    vector <int> c;
    int d = 0, e = 0;
    for (int i = 0; i < a.size(); i++)
        c.push_back(a[i]);
    for (int i = 0; i < b.size(); i++)
    {
        if (c.size() < i + 1)
        {
            c.push_back(0);
        }
        d = (c[i] + b[i] + e) / max_size;
        c[i] = (c[i] + b[i] + e) % max_size;
        e = d;
    }
    if (e != 0) c.push_back(e);
    return c;
}

vector <int> deduction_big_number(vector <int> a, vector <int> b)
{
    vector <int> c;
    int d = 0, e = 1000000;
    for (int i = 0; i < a.size(); i++)
        c.push_back(a[i]);
    for (int i = 0; i < b.size(); i++)
    {
        d = (c[i] - b[i] + e) / max_size - 1;
        c[i] = (c[i] - b[i] + e) % max_size;
        e = d;
    }
    return c;
}

vector <int> multiplication_big_number(vector <int> a, vector <int> b)
{
    vector <int> c;
    int d = 0, e = 0;
    for (int i = 0; i < b.size(); i++)
    {
        for (int k = 0; k < a.size(); k++)
        {
            if (i + k + 1 > c.size())
            {
                c.push_back(0);
            }
            d = (a[k] * b[i] + e) / max_size;
            c[i + k] += (a[k] * b[i] + e) % max_size;
            e = d;
        }
        if (e != 0) c.push_back(e);
    }
    return c;
}

vector <int> division_big_number(vector <int> a, vector <int> b)
{
    vector <int> c;
    vector <int> n(1, 0);
    vector <int> d(1, 1);
    c.push_back(0);
    while (comparison_big_number(a, math_big_number(n, '*', b)))
    {
        //c = math_big_number(n, '*', b);
        n = math_big_number(n, '+', d);
    }
    if (comparison_big_number(math_big_number(n, '*', b), a))
        n = math_big_number(n, '-', d);
    return n;
}
vector <int> math_big_number(vector <int> a, char sign, vector <int> b)
{
    vector <int> c;
    
    if (sign == '+')
    {
        return sum_big_number(a, b);
    }

    else if (sign == '*')
    {
        return multiplication_big_number(a, b);
    }
    
    else if (sign == '-')
    {
        return deduction_big_number(a, b);
    }
    
    else if (sign == '/')
    {
        return division_big_number(a, b);
    }
}

vector <int> sqrt_root(vector <int> a)
{
    vector <int> n(1, 0);
    vector <int> d(1, 1);
    while (comparison_big_number(a, math_big_number(n, '*', n)))
    {
        n = math_big_number(n, '+', d);
    }
    if (comparison_big_number(math_big_number(n, '*', n), a)) n = math_big_number(n, '-', d);
    return n;
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

string file_in_str(string name_file)
{
    fstream f(name_file);
    string s;
    f >> s;
    return s;
}

vector <int> str_in_big_number(string s)
{
    vector <int> a;
    for (int i = 0; i < ceil(float(s.size() / log10(max_size))) - 1; i++)
    {
        string s1 = s.substr(s.size() - log10(max_size) * (i + 1), log10(max_size));
        a.push_back(atoi(s1.c_str()));
    }
    string s1;
    if (s.size() % int(log10(max_size)) == 0)
        s1 = s.substr(0, log10(max_size));
    else
        s1 = s.substr(0, s.size() % int(log10(max_size)));
    a.push_back(atoi(s1.c_str()));
    return a;
}

int main()
{
    setlocale(LC_ALL, "rus");
    vector <int> a;
    vector <int> b;
    vector <int> c;
    string d;
    char f;
    cout << "первое число ";
    cin >> d;
    b = str_in_big_number(d);
    cout << "знак который вы хотите применить: + - * / sqrt ";
    cin >> d;
    if (d == "sqrt") a = sqrt_root(b);
    else
    {
        f = d[0];
        cout << "второе число ";
        cin >> d;
        c = str_in_big_number(d);
        a = math_big_number(b, f, c);
    }
    print_number(a);
    a.
}