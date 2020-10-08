#include <iostream>
#include <string>

using namespace std;

int main()
{
    string words;
    cin >> words;
    int n = 0;
    for (int i = 0; i + 1 < words.size(); i++)
    {
        /*if (words[i] == words[i + 1])
            n++;
        else
        {
            n++;
            if (n < 10)
                cout << "00" << n;
            else
                if (n < 100)
                    cout << "0" << n;
                else
                    cout << n;
            n = 0;
            cout << int(words[i]) << endl;
        }*/
    }
    n++;
    if (n < 10)
                cout << "00" << n;
            else
                if (n < 100)
                    cout << "0" << n;
                else
                    cout << n;
    n = 0;
    cout << int(words[words.size() - 1]) << endl;
}
