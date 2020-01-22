#include <iostream>
#include <string>

using namespace std;

int main()
{
	int width;
	string text;
	cin >> text >> width;
	for (int i = 0; i < (width - text.size()) / 2; i++)
	{
		cout << " ";
	}
	cout << text;
}