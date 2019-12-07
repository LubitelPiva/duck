#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int t;
    cin>>t;
    if ((t > -1)and(t < 121)){
        if (((t > 10)and(t < 20))or(t % 10 > 4)or(t % 10 == 0)) cout<<t << " лет";
        else if (t % 10 == 1) cout<<t << " год";
        else if ((t % 10 < 5)or(t % 10 > 1)) cout<<t << " года";

    }
}
