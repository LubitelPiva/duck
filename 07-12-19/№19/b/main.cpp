#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float x, y;
    cin>>x >>y;
    if (y < -x) cout<< "��������";
    else cout<< "�� ��������";
}
