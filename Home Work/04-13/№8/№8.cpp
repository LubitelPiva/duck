#include <iostream>
using namespace std;

double f1(double x) {
    return x * x;
}
double f2(double x) {
    return 4 * cos(x);
}

int main() {
    double a, b;
    cin >> a >> b;
    double delta = 0.0001;
    double Ss = 0;
    double x = a;
    while (x < b) {
        double h1 = f1(x);
        double h2 = f2(x);
        Ss += (h2 - h1) * delta;
        x += delta;
    }
    cout << "S = " << Ss << endl;
    return 0;
}
