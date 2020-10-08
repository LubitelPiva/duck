#include <iostream>

using namespace std;

int main()
{
    int a, b, x, s;
    for (int i = 0;a != 2 or b != 9; i++)
    {
        a = 0;
        b = 1;
        x = i;
        while (x > 0)
        {
            if (x % 2 > 0)
                a++;
            else
                b = x % 5;
            x = x / 5;
        }
        s = i;
    }
    cout << s;

}
