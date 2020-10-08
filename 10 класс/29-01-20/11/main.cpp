#include <iostream>
#include <string>

using namespace std;

void trim (string& s)
{
    while (true)
    {
        if (s[0] != ' ') break;
        s.erase(0, 1);
    }
    while (s[s.size() - 1] == ' ')
    {
        s.erase(s.size() - 1, 1);
    }
}
int main()
{
    string s;
    getline(cin, s);
    trim(s);
    cout << endl << s;
}
