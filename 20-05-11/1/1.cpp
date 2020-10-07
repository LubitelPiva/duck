#include <iostream>
#include <string>

using namespace std;

const int symbols = 26;

string crypt(string text, int k)
{
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] >= 'A' and text[i] <= 'Z' or text[i] >= 'a' and text[i] <= 'z')
        {
            char a = text[i] + k;
            if (a > 'Z' and a < 'a' or a > 'z')
            {
                a -= 26;
                text[i] = a;
            }
        }
    }
    return text;
}

    string decrypt(string text, int k)
        {
        for (int i = 0; i < text.size(); i++)
        {
            if (text[i] >= 'A' and text[i] <= 'Z' or text[i] >= 'a' and text[i] <= 'z')
            {
                char a = text[i] - k;
                if (a < 'A' or a > 'Z' and a < 'a')
                {
                    a += 26;
                    text[i] = a;
                }
            }
        }
        return text;
        }

    int main()
    {
        string s;
        cout << "Enter the text: ";
        getline(cin, s);

        int k;
        cout << "Enter k: ";
        cin >> k;

        string s1 = crypt(s, k);
        cout << "Crypted text: " << s1 << endl;
        cout << "Decrypted text: " << decrypt(s1, k) << endl;


        return 0;
    }