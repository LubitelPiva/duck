#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    cin>>x;
    if (x/1000==x%10){
        cout<<"��";
        if ((x/100)%10==(x%100)/10)
        {
            cout<<"��";
        }
        else {cout<<"���";}
    }
    else {cout<<"���";}
    return 0;
}
