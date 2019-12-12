#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int x;
    float sq = 1;
    cin >> x;
    for (int i = 0; i < 10; i++)
    {
        sq = (sq + x / sq) / 2;
    }
    cout << fixed << setprecision(10);
    cout << sq << endl;
    cout << sqrt(x) << endl;
    cout << pow(x, 0.5);
}
