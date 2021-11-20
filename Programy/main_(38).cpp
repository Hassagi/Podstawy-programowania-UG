#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int a1, b1, nwp;

    cout << "podaj a" << endl;
    cin >> a;
    cout << "podaj b" << endl;
    cin >> b;

    if (a > 0 && b > 0)
    {
        a1 = a;
        b1 = b;
        while (a1 != b1)
        {
            if(a1 > b1)
            {
                a1 = a1 - b1;
            }
            else
            {
                b1 = b1 - a1;
            }
        }
        nwp = a1;
        cout << "nwp = " << nwp << endl;

    }
    else
    {
        cout << "brak rozwi¹zañ !" << endl;
    }

    return 0;
}

