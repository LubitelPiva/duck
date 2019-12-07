#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    string a, b;
    cin>>x;
    if (x%10==0) a = "";
    else if (x%10==1) a = "один";
    else if (x%10==2) a = "два";
    else if (x%10==3) a = "три";
    else if (x%10==4) a = "четыри";
    else if (x%10==5) a = "пять";
    else if (x%10==6) a = "шесть";
    else if (x%10==7) a = "семь";
    else if (x%10==8) a = "восемь";
    else if (x%10==9) a = "девять";
    else if (x/10==0) b = "";
    else if (x/10==2) b = "двадцать";
    else if (x/10==3) b = "тридцать";
    else if (x/10==4) b = "сорок";
    else if (x/10==5) b = "петдесят";
    else if (x/10==6) b = "шесть";
    else if (x/10==7) b = "семь";
    else if (x/10==8) b = "восемь";
    else if (x/10==9) b = "девять";
    else if (x/10==0) b = "";
    else if (x/10==1) b = "один";
    else if (x/10==2) b = "два";
    else if (x/10==3) b = "три";
    else if (x/10==4) b = "четыри";
    else if (x/10==5) b = "пять";
    else if (x/10==6) b = "шесть";
    else if (x/10==7) b = "семь";
    else if (x/10==8) b = "восемь";
    else if (x/10==9) b = "девять";
}
