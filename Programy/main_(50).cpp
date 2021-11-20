#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x,y;
    float suma, roznica, iloczyn, iloraz;
    char znak;

    cout << "Podaj pierwszą liczbę" << endl;
    cin >> x;
    cout << "Podaj drugą liczbę" << endl;
    cin >> y;
    cout << "Jakie działanie chcesz wykonać ?" << endl;
    cout << "Suma +" << endl;
    cout << "Różnica -" << endl;
    cout << "Iloczyn *" << endl;
    cout << "Iloraz /" << endl;

    cin >> znak;

    switch (znak)
    {
        case'+':
        {
            suma = x + y;
            cout << "Suma = " << suma << endl;
        }
        break;
        case'-':
        {
            roznica = x - y;
            cout << "Różnica = " << roznica << endl;
        }
        break;
        case '*':
        {
            iloczyn = x * y;
            cout << "Iloczyn = " << iloczyn << endl;
        }
        break;
        case '/':
        {
            if (y!=0)
            {
                iloraz = x / y;
                cout << "Iloraz = " << iloraz << endl;
            }
            else
            {
                cout << "Nie dzielimy przez zero" << endl;
            }
            break;
        }

        default: cout << "Nie poprawny znak !" << endl;
        break;
    }


    return 0;
}
