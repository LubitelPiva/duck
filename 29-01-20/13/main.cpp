#include <iostream>

using namespace std;

bool zero(string s)
{
    int n = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            n++;
        }
    }
    return !(n % 2);
}
int main()
{
    string s;
    cout << endl << zero(s);
    cin >> s;
}
