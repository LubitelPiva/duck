#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string word, endword;
    char s;
    int ten = 0, n = 36, m = 36;
    cin >> word;
    for (int i = 1; i <= word.size(); i++)
    {
        s = word[word.size() - i];
        if (s >= '0' and s <= '9')
        {
            ten += (s - '0') * pow(n, i - 1);
        }
        else
        {
            ten += (s - 'A' + 10) * pow(n, i - 1);
        }
    }
    int otv = ten;
    while (otv >= m)
    {
        if (otv % m < 10)
        {
            endword = char(otv % m + '0') + endword;
        }
        else
        {
            endword = 'A' + (otv % m - 10) + endword;
        }
        otv /= m;
    }
    if (otv < 10)
    {
        endword = otv + '0' + endword;
    }
    else
    {
        endword += 'A' + (otv - 10) + endword;
    }
    cout << endl << endword;
}
