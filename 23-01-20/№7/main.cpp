#include <iostream>
#include <string>

using namespace std;

int main()
{
    int start_name = 0;
    string text;
    char slash = '\\';
    cin >> text;
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == slash) start_name = i;
    }
    for (int i = start_name + 1; i < text.size(); i++)
    {
        cout << text[i];
    }
}
