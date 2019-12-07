#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    string a, b;
    cin>>x;
    if ((x > 9)and(x < 20)){
        if (x%10==0) a = "десять";
    else if (x%10==1) a = "одинадцать";
    else if (x%10==2) a = "двенадцать";
    else if (x%10==3) a = "тренадцать";
    else if (x%10==4) a = "четырнадцать";
    else if (x%10==5) a = "пятнадцать";
    else if (x%10==6) a = "шестнадцать";
    else if (x%10==7) a = "семьнадцать";
    else if (x%10==8) a = "восемьнадцать";
    else if (x%10==9) a = "девятнадцать";
    }
    else {
    if (x/10==0) b = "";
    else if (x/10==2) b = "двадцать";
    else if (x/10==3) b = "тридцать";
    else if (x/10==4) b = "сорок";
    else if (x/10==5) b = "петдесят";
    else if (x/10==6) b = "шесдесят";
    else if (x/10==7) b = "семьдесят";
    else if (x/10==8) b = "восемьдесят";
    else if (x/10==9) b = "девяноста";
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
    }
    if (x < 10) cout<< a;
    else cout<< b << " " << a;
}
