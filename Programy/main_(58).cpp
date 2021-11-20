#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int liczba1, liczba2, suma;

    cout << "Podaj pierwszą liczbę " << endl;
    cin >> liczba1;

    if  (liczba1 >= 0)
    {
        cout << "Podaj drugą liczbę " << endl;
        cin >> liczba2;

        if (liczba2 >= 0)
        {
            suma = liczba1 + liczba2;
            cout << "Suma = " << suma << endl;
        }
        else
        {
            cout << "Podaj liczbę dodatnią" << endl;
        }
    }
    else
    {
        cout << "Podaj liczbę dodatnią" << endl;
    }


    return 0;
}
