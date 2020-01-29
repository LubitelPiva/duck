#include <iostream>
#include <string>

using namespace std;

void allWords( string word, string alphabet, int K, int& j )
{
    if ( K < 1)
    {
        cout << word << endl;
        j++;
        return;
    }
    for (int i = 0; i < alphabet.size(); i++)
    {
        allWords( word + alphabet[i], alphabet, K-1, j);
    }
}
int main()
{
    string letters = "ABC";
    int wordLength = 3, j = 0;
    allWords( "", letters, wordLength, j);
    cout << j;
    cin.get();
}
