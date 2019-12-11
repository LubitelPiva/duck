#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	a = a / 100 * 64 + a / 10 % 10 * 8 + a % 10;
	cout << a;
}