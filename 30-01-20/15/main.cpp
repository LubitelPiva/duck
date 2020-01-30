#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string word;
    char s;
    int ten = 0;
    cin >> word;
    for (int i = 1; i <= word.size(); i++)
    {
        s = word[word.size() - i];
        if (s >= '0' and s <= '9')
        {
            ten += (s - '0') * pow(16, i - 1);
        }
        else
        {
            ten += (s - 'A' + 10) * pow(16, i - 1);
        }
    }
    cout << endl << ten;
}
