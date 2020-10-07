#include <iostream>
#include <string>

using namespace std;

string crypt(string text, string word) {
    for (int i = 0; i < text.size(); i++) {
        int k = word[i % word.size()] - 'a';
        if (text[i] >= 'A' and text[i] <= 'Z') {
            if (text[i] + k > 'Z')
                text[i] = text[i] + k - 26;
            else
                text[i] += k;
        }

        if (text[i] >= 'a' and text[i] <= 'z') {
            if (text[i] + k > 'z')
                text[i] = text[i] + k - 26;
            else
                text[i] += k;
        }
    }
    return text;
}

string decrypt(string text, string word) {
    for (int i = 0; i < text.size(); i++) {
        int k = word[i % word.size()] - 'a';
        if (text[i] >= 'A' and text[i] <= 'Z') {
            if (text[i] - k < 'A')
                text[i] = text[i] - k + 26;
            else
                text[i] -= k;
        }

        if (text[i] >= 'a' and text[i] <= 'z') {
            if (text[i] - k < 'a')
                text[i] = text[i] - k + 26;
            else
                text[i] -= k;
        }
    }
    return text;
}

int main() {
    string s;
    getline(cin, s);

    string word;
    cin >> word;

    cout << crypt(s, word) << endl;
    cout << decrypt(crypt(s, word), word) << endl;

    return 0;
}