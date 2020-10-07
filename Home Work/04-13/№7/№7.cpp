#include <iostream>

using namespace std;

double f(double x) {
	return x * x;
}

int main() {
	double a, b;
	cin >> a >> b;

	double delta = 0.0001;
	double Ss = 0;

	double x = a;
	while (x < b) {
		double h = f(x);

		double S = h * delta;
		Ss += S;
		x += delta;
	}

	cout << "S = " << Ss << endl;

	return 0;
}
