#include <iostream>
#include <string>

using namespace std;

string coding (string w)
{
    string cod;
    int n = 1;
    string f;
    for (int i = 0; i + 1 < w.size(); i++)
    {
        if (w[i] == w[i + 1])
        {
            n++;
        }
        else
        {
            if (n < 10)
                f = "00" + to_string(n);
            else
                if (n < 100)
                    f = "0" + to_string(n);
                else
                    f = to_string(n);
            cod = cod + f +
        }
    }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
