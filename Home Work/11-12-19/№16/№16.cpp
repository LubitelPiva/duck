includes <iostream>
using namespace std;
int sixten(char a, int b)
{
    if (a < 10) return (a);
    else return (a - 'A' + 10);
    /*if (a[a.size() - b] = 'a') c += 10;
    else if (a[a.size() - b] = 'b') c += 11;
    else if (a[a.size() - b] = 'c') c += 12;
    else if (a[a.size() - b] = 'd') c += 13;
    else if (a[a.size() - b] = 'e') c += 14;
    else if (a[a.size() - b] = 'f') c += 15;*/
}
int main()
{
    char a;
    cin >> a;
    c += sixten(a[a.size() - 1]) + sixten(a[a.size() - 2]);
}
