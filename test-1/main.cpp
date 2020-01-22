#include <iostream>
#include <sstream>

using namespace std;

string addSpaces(string s, int width) {
    int index = 0, lacksSpaces = width - s.size();
    for (int i = 0; i < lacksSpaces; i++)
    {
        index = s.find(' ', index) + 1;
        s.insert(index, " ");
        while (s.find(' ', index) == index)
        {
            index++;
            if (s.find(' ', index) == -1) index = 0;
        }
    }
    return s;
}

void print(string s, int width) {
    istringstream str(s);
    string word, words;
    str >> words;

    while (!str.eof()) {
        str >> word;
        int len = words.size() + word.size() + 1;
        if (len < width) {
            words += ' ' + word;
        }
        if (len == width) {
            cout << words << ' ' << word << endl;
            words = "";
            str >> words;
        }
        if (len > width) {
            cout << addSpaces(words, width) << endl;
            words = word;
        }
    }
    if (words.size() > 0)
        cout << words;
}

int main() {
    string str = "azs fa aa gdsffs";
    print(str, 12);
    return 0;
}
