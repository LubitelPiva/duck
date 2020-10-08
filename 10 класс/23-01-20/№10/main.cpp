#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text;
	cin >> text;
	cout << endl;
	while (text.find("  ") != string::npos) {
        text.erase(text.find(" "), 1);
	}
	for (int i = 0; i < text.size() - 1; i++)
	{
		if (text[i] + text[i + 1] == '  ')
		{
			text.erase(i);
		}
	}
	cout << text;
}

