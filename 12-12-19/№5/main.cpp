#include <iostream>

using namespace std;

int main()
{
    int k;
    for (int i = 100; i < 1000; i++)
    {
        k = (i * i) / 1000;
        if (i == k) cout << i;
    }
}
