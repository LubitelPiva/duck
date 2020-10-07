#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b;
	cin >> a >> b;
	float x = a, delta = 0.001;
	while (x < b)
	{
		if ((x + sin(x)) - x * x * x - x * x - x == 0)
			cout << x << endl;
		x += delta;
	}
}