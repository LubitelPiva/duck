#include <iostream>
#include <string>

using namespace std;

int R[4] = { 0, 0, 0, 0 };

int registor(int a)
{
    if (a <= 3 and a >= 0)
        return 0;
    else
    {
        cout << "error" << endl;
        return 1;
    }
}

void comand_1(int reg, char sours)
{
    if (registor(reg) == 0)
        if ((sours <= '9') and (sours >= '0'))
            R[reg] = sours - '0';
        else 
            R[reg] = sours - 'A' + 10;
    
}

void comand_2(int reg, int sours)
{
    if (registor(reg) == 0 and registor(sours) == 0)
        R[reg] = R[sours];
}

void comand_3(int reg, int sours)
{
    if (registor(reg) == 0 and registor(sours) == 0)
        R[reg] = R[reg] + R[sours];
}

void comand_4(int reg, int sours)
{
    if (registor(reg) == 0 and registor(sours) == 0)
        R[reg] = R[reg] - R[sours];
}

void comand_5(int reg, int sours)
{
    if (registor(reg) == 0 and registor(sours) == 0)
        R[reg] = R[reg] * R[sours];
}

void comand_6(int reg, int sours)
{
    if (registor(reg) == 0 and registor(sours) == 0)
        if (R[sours] != 0)
            R[reg] = R[reg] / R[sours];
        else
            cout << "error" << endl;
}

void comand_7(int reg, int sours)
{
    if (registor(reg) == 0 and registor(sours) == 0)
        R[reg] = R[reg] & R[sours];
}

void comand_8(int reg, int sours)
{
    if (registor(reg) == 0 and registor(sours) == 0)
        R[reg] = R[reg] | R[sours];
}

void comand_9(int reg, int sours)
{
    if (registor(reg) == 0 and registor(sours) == 0)
        R[reg] = R[reg] ^ R[sours];
}

void comand_A(int reg, int sours)
{
    if (registor(reg) == 0 and registor(sours) == 0)
        R[reg] = ~R[sours];
}

int main()
{
    string a;
    for (int i = 0; i < i + 1; i++)
    {
        cin >> a;
        if (a == "СТОП")
            break;
        if ((a[0] >= '0' and a[0] <= '9') or a[0] == 'A')
        {
            if (a[0] == '1')
                comand_1(a[1] - '0', a[2]);
            if (a[0] == '2')
                comand_2(a[2] - '0', a[1] - '0');
            if (a[0] == '3')
                comand_3(a[2] - '0', a[1] - '0');
            if (a[0] == '4')
                comand_4(a[2] - '0', a[1] - '0');
            if (a[0] == '5')
                comand_5(a[2] - '0', a[1] - '0');
            if (a[0] == '6')
                comand_6(a[2] - '0', a[1] - '0');
            if (a[0] == '7')
                comand_7(a[2] - '0', a[1] - '0');
            if (a[0] == '8')
                comand_8(a[2] - '0', a[1] - '0');
            if (a[0] == '9')
                comand_9(a[2] - '0', a[1] - '0');
            if (a[0] == 'A')
                comand_A(a[2] - '0', a[1] - '0');
        }
        else
            cout << "error" << endl;
        cout << R[0] << "  " << R[1] << "  " << R[2] << "  " << R[3] << endl;
    }
    cout << R[0] << "  " << R[1] << "  " << R[2] << "  " << R[3] << endl;
}
