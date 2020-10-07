#include <iostream>
using namespace std;

double f1(double x) {
    return 3 * sqrt(4 - x * x) / 2;
}
int main() {
    double a, b;
    cin >> a >> b;
    double delta = 0.0001;
    double Ss = 0;
    double x = a;
    while (x < b) {
        double h1 = f1(x);
        double h2 = f1(x + delta);
        Ss += (h2 - h1) * delta * 2;
        x += delta;
    }
    cout << "S = " << Ss << endl;
    return 0;
}
