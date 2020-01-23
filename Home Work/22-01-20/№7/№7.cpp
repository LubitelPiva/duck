#include <iostream>
#include <string>

using namespace std;

int main()
{
    int start_name = 0;
    string text;
    string s('\\');
    char slash = "a";
    cin >> text;
    cout << s << "adad" << endl;
    cout << endl << slash;
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == slash) start_name = i;
    }
    cout << start_name << endl;
    for (int i = start_name + 1; i < text.size(); i++)
    {
        cout << text[i];
    }
}
