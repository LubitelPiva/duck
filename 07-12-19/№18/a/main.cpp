#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    string a, b;
    cin>>x;
    if (x%10==0) a = "";
    else if (x%10==1) a = "����";
    else if (x%10==2) a = "���";
    else if (x%10==3) a = "���";
    else if (x%10==4) a = "������";
    else if (x%10==5) a = "����";
    else if (x%10==6) a = "�����";
    else if (x%10==7) a = "����";
    else if (x%10==8) a = "������";
    else if (x%10==9) a = "������";
    else if (x/10==0) b = "";
    else if (x/10==2) b = "��������";
    else if (x/10==3) b = "��������";
    else if (x/10==4) b = "�����";
    else if (x/10==5) b = "��������";
    else if (x/10==6) b = "�����";
    else if (x/10==7) b = "����";
    else if (x/10==8) b = "������";
    else if (x/10==9) b = "������";
    else if (x/10==0) b = "";
    else if (x/10==1) b = "����";
    else if (x/10==2) b = "���";
    else if (x/10==3) b = "���";
    else if (x/10==4) b = "������";
    else if (x/10==5) b = "����";
    else if (x/10==6) b = "�����";
    else if (x/10==7) b = "����";
    else if (x/10==8) b = "������";
    else if (x/10==9) b = "������";
}
