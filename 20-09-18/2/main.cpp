#include <iostream>
#include <string>

using namespace std;

int R[4] = {0, 0, 0, 0};

void comand_01 (int reg, int con)
{
    R[reg] = con;
}

void comand_02 (int reg, int sourse)
{
    R[reg] = sourse;
}

void comand_03 (int reg, int sourse)
{
    R[reg] = R[reg] + sourse;
}

void comand_04 (int reg, int sourse)
{
    R[reg] = R[reg] - sourse;
}

void comand_05 (int reg, int sourse)
{
    R[reg] = R[reg] * sourse;
}

void comand_06 (int reg, int sourse)
{
    R[reg] = R[reg] / sourse;
}

void comand_07 (int reg, int sourse)
{
    R[reg] = R[reg] & sourse;
}

void comand_08 (int reg, int sourse)
{
    R[reg] = R[reg] | sourse;
}

void comand_09 (int reg, int sourse)
{
    R[reg] = R[reg] ^ sourse;
}

int main()
{
    string a;
    while (a.size() == 2)
    {
    cin >> a;
    if (a[0] == '1')
        comand_01(a[1] - '0', a[2] - '0');
    else
        if (a[0] == '2')
        comand_02(a[2] - '0', a[1] - '0');
    else
        if (a[0] == '3')
        comand_03(a[2] - '0', a[1] - '0');
    else
        if (a[0] == '4')
        comand_04(a[2] - '0', a[1] - '0');
    else
        if (a[0] == '5')
        comand_05(a[2] - '0', a[1] - '0');
    else
        if (a[0] == '6')
        comand_06(a[2] - '0', a[1] - '0');
    else
        if (a[0] == '7')
        comand_07(a[2] - '0', a[1] - '0');
    else
        if (a[0] == '8')
        comand_08(a[2] - '0', a[1] - '0');
    else
        if (a[0] == '9')
        comand_09(a[2] - '0', a[1] - '0');
    else
        cout << "error" << endl;
    cout << R[0] << ' ' << R[1] << ' ' << R[2] << ' ' << R[3] << endl;
    }
}
