#include <iostream>
#include <string>

using namespace std;

int main()
{
    int nw = 0;
    string words;
    char token, oldtoken;
    getline(cin, words);
    oldtoken = words[0];
    if (oldtoken != ' ')
    {
        nw++;
    }
    for (int i = 1; i < words.size(); i++)
    {
        token = words[i];
        if (token != ' ' and oldtoken == ' ')
        {
            nw++;
        }
        oldtoken = token;
    }
    cout << endl << nw;
}