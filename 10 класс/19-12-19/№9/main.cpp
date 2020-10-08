#include <iostream>

using namespace std;
bool deletsa(int a)
{
    int b = a;
    while (b != 0)
    {
        if (b % 10 != 0 && a % (b % 10) != 0) return false;
        b /= 10;
    }
    return true;
}
int main()
{
    /*for (int i = 10000; i < 100000; i++)
    {
        if ((i % 133 == 125) && (i % 134 == 111)) cout << i << endl;
    }*/
    /*int a;
    cin >> a;
    for (int i = 1; i < a; i++)
    {
    if (deletsa(i)) cout << i << endl;
    }*/
    for (int i = 1000; i < 100000; i++)
    {

    }
}
