#include <iostream>

using namespace std;

bool imp(int& a, int& b)
{
    return (a + !b);
}
int main()
{
    int a, b;
    cout << "������� ��� ���������� ��������" << endl;
    cin >> a >> b;
    cout << imp(a, b);
}
