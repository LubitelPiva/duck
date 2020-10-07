#include <iostream>

using namespace std;

int main()
{
    double F[4] = { 1, 3, 6, 10 };
    double l[4] = { 0.028, 0.07, 0.17, 0.26 };

    double A = 0, B = 0;

    for (auto item : l)  A += item * item;
    for (int i = 0; i < 4; i++)  B += F[i] * l[i];

    double k = B / A;

    cout << k;
}