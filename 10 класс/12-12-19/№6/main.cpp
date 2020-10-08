#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for (int i = 100; i < 1000; i++)
    {
        if (i == int(pow(i / 100, 3) + pow(i / 10 % 10, 3) + pow(i % 10, 3))) cout << i << endl;
    }
}
