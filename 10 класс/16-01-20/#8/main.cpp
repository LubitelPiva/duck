#include <iostream>

using namespace std;

bool not_and(int& a, int& b)
{
    return !(a and b);
}
bool not_or(int& a, int& b)
{
    return !(a or b);
}
int main()
{
    int a, b;
    cout << "введите два логических значения" << endl;
    cin >> a >> b;
    cout << not_and(a, b) << endl << not_or(a, b);
}
