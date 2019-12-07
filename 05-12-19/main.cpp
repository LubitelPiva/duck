#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x, y, z;
    bool fool;
    cin >> x >> y >> z;
    fool = ( min( x, min( y, z))) < 0;
    cout << fool;
    return 0;
}
