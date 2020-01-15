#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int k;
    cin >> k;
    for (int i = pow(10, k - 1); i < pow(10, k); i++) cout << i << " ";
}