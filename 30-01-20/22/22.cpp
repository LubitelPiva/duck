#include <iostream>
#include <string>

using namespace std;

int main()
{
	string words;
	getline(cin, words);
	for (int i = 0; i < words.size() / 2 + 2; i++)
	{
		if (words[i] != words[words.size() - 1 - i])
		{
			cout << "it is not Palindrom";
			break;
		}
		if (i == words.size() / 2) cout << "it is Palindrom";
	}
}