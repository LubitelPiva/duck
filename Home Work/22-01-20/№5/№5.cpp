#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	string text;
	int n;
	cin >> text >> n;
	for (int i = 0; i < ceil(text.size()) / n; i++)
	{
		cout << endl;
		for (int k = 0 + n * i; k < n * (i + 1) and k < text.size(); k++)
		{
			cout << text[k];
		}
	}
}