#include <iostream>
using namespace std;
int main()
{
    int i = 2147483647;
    cout << i << endl;
    cout << endl << i + 1;
}
// происходит переполнение
// 2147483647 это максимальное числов int
// -2147483648 это минимальное число в int