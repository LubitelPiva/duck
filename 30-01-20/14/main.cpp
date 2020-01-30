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
        ten += (s - '0') * pow(2, i - 1);
    }
    cout << endl << ten;
}
