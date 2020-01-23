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
    if (start_name == 0)
    {
        cout << "error";
    }
    else
    {
        for (int i = start_name ; i >= 0; i--)
        {
            cout << text[i];
        }
    }
}
