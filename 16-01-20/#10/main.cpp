#include <iostream>

using namespace std;

bool xorr(bool& a, bool& b)
{
    return (!a && b + a && !b);
}
int main()
{
    bool a, b;
    cout << "������� ��� ���������� ��������" << endl;
    cin >> a >> b;
    cout << !150 << endl;
    cout << xorr(a, b);
}
