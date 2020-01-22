#include <iostream>
#include <string>

using namespace std;

int main()
{
    int start_name = 0;
    string text, slash = ' \ ';
    cin >> text;
    cout << endl << slash;
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == slash[1]) start_name = i;
    }
    cout << endl;
    for (int i = start_name + 1; i < text.size(); i++)
    {
        cout << text[i];
    }
}