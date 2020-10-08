#include <iostream>
#include <string>

using namespace std;

int main()
{
    string words;
    getline(cin, words);
    for (int i = 1; i <= words.size(); i++)
    {
        cout << words[words.size() - i];
    }
}