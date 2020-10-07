#include <iostream>

using namespace std;

float Ss(float r)
{
    return (r * r * 3.1415 * 2) + 1000 / r;
}

int main()
{
    double eps = 0.000001;
    double delta = 2 * eps;
    double k = 0.01;

    double a, b;
    cin >> a >> b;

    while (b - a > delta) {
        double r = (b - a) * k;
        double x1 = (a + b) / 2 - r;
        double x2 = (a + b) / 2 + r;

        if (Ss(x1) > Ss(x2)) {
            a = x1;
        }
        else {
            b = x2;
        }
    }

    cout << a << endl;

    return 0;
}