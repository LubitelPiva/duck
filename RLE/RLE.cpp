#include <iostream>
#include <string>

using namespace std;

string coding(string words)
{
    string cod, a, b;
    int n = 1;
    for (int i = 0; i + 1 < words.size(); i++)
    {
        //cout << a << "  " << n << endl;
        if (words[i] == words[i + 1])
            n = n + 1;
        else
        {
            if (n < 10)
                a = "00" + to_string(n);
            else
                if (n < 100)
                    a = "0" + to_string(n);
                else
                    a = to_string(n);
            if ((int)(words[i]) < 10)
                b = "00" + to_string((int)(words[i]));
            else
                if ((int)(words[i]) < 100)
                    b = "0" + to_string((int)(words[i]));
                else
                    b = to_string((int)(words[i]));
            cod = cod + a + b;
            n = 1;
        }
    }
    if (n < 10)
        a = "00" + to_string(n);
    else
        if (n < 100)
            a = "0" + to_string(n);
        else
            a = to_string(n);
    if ((int)(words[words.size() - 1]) < 10)
        b = "00" + to_string((int)(words[words.size() - 1]));
    else
        if ((int)(words[words.size() - 1]) < 100)
            b = "0" + to_string((int)(words[words.size() - 1]));
        else
            b = to_string((int)(words[words.size() - 1]));
    cod = cod + a + b;
    return cod;
}

string decoding(string cod)
{
    string words;
    for (int i = 0; i < cod.size() / 5; i++)
    {
        int num = (cod[i * 6] - '0') * 100 + (cod[i * 6 + 1] - '0') * 10 + (cod[i * 6 + 2] - '0'), a = (cod[i * 6 + 3] - '0') * 100 + (cod[i * 6 + 4] - '0') * 10 + (cod[i * 6 + 5] - '0');
        for (int k = 0; k < num; k++)
            words = words + (char)(a);
    }
    return words;
}

string coding_v2(string words)
{
    int i = 0, n = 0;
    string cod, a, b;
    while (i + 1 < words.size())
    {
        if (words[i] == words[i + 1])
        {
            n = 1;
            while (words[i] == words[i + 1])
            {
                n++;
                i++;
                if (i + 1 == words.size())
                    break;
            }
            if (n < 10)
                a = "00" + to_string(n);
            else
                if (n < 100)
                    a = "0" + to_string(n);
                else
                    a = to_string(n);
            if ((int)(words[i]) < 10)
                b = "00" + to_string((int)(words[i]));
            else
                if ((int)(words[i]) < 100)
                    b = "0" + to_string((int)(words[i]));
                else
                    b = to_string((int)(words[i]));
            cod = cod + a + b;
            i++;
        }
        else
        {
            n = 0;
            string word = "";
            while (words[i] != words[i + 1])
            {
                if ((int)(words[i]) < 10)
                    b = "00" + to_string((int)(words[i]));
                else
                    if ((int)(words[i]) < 100)
                        b = "0" + to_string((int)(words[i]));
                    else
                        b = to_string((int)(words[i]));
                word = word + b;
                n++;
                i++;
                if (i + 1 == words.size())
                {
                    if ((int)(words[i]) < 10)
                        b = "00" + to_string((int)(words[i]));
                    else
                        if ((int)(words[i]) < 100)
                            b = "0" + to_string((int)(words[i]));
                        else
                            b = to_string((int)(words[i]));
                    word = word + b;
                    n++;
                    break;
                }
            }
            if (n < 10)
                a = "10" + to_string(n);
            else
                if (n < 100)
                    a = "1" + to_string(n);
                else
                    a = to_string(n + 100);
            cod = cod + a + word;
        }
    }
    return cod;
}

string decoding_v2(string cod)
{
    string words;
    int i = 0, num, a, j;
    while (i + 1 < cod.size())
    {
        if (cod[i] == '0')
        {
            num = (cod[i] - '0') * 100 + (cod[i + 1] - '0') * 10 + (cod[i + 2] - '0'); 
            a = (cod[i + 3] - '0') * 100 + (cod[i + 4] - '0') * 10 + (cod[i + 5] - '0');
            for (int k = 0; k < num; k++)
                words = words + (char)(a);
            i = i + 6;
        }
        else
        {
            num = (cod[i] - '1') * 100 + (cod[i + 1] - '0') * 10 + (cod[i + 2] - '0');
            for (int k = 0; k < num; k++)
            {
                a = (cod[i + k * 3 + 3] - '0') * 100 + (cod[i + k * 3 + 4] - '0') * 10 + (cod[i + k * 3 + 5] - '0');
                words = words + (char)(a);
                j = k + 1;
            }
            i = i + 3 + j * 3;
        }

    }
    return words;
}

int main()
{
    string words;
    cin >> words;
    string cod = coding(words);
    cout << cod << endl;
    words = decoding(cod);
    cout << words << endl;
    cod = coding_v2(words);
    cout << cod << endl;
    words = decoding_v2(cod);
    cout << words;
}
