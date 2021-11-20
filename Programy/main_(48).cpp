#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    char kategoria;
    int godziny, nadgodziny;
    float stawka, suma;

    cout << "Podaj katerorię zaszeregowania" << endl;
    cin >> kategoria;
    cout << "Podaj liczbę godzin w ciągu tygodnia" << endl;
    cin >> godziny;

    switch (kategoria)
    {
        case'A':
        {
            stawka = 15;
            if (godziny <= 40)
            {
                suma = stawka * godziny;
                cout << "brutto = " << suma << endl;
                if (suma<=700)
                {
                    suma = 0.85 * suma;
                    cout << "netto = " << suma << endl;
                }
                else if (suma > 700 && suma <= 1200)
                {
                    suma = 0.8 * suma;
                    cout << "netto = " << suma << endl;
                }
                else
                {
                    suma = 0.75 * suma;
                    cout << "netto = " << suma << endl;
                }

            }
            else
            {
                suma = stawka * 40 + (stawka*2)*(godziny-40);
                cout << "brutto = " << suma << endl;
                if (suma<=700)
                {
                    suma = 0.85 * suma;
                    cout << "netto = " << suma << endl;
                }
                else if (suma > 700 && suma <= 1200)
                {
                    suma = 0.8 * suma;
                    cout << "netto = " << suma << endl;
                }
                else
                {
                    suma = 0.75 * suma;
                    cout << "netto = " << suma << endl;
                }
            }
        }
        break;

        case'B':
        {
            stawka = 25;
            if (godziny <= 40)
            {
                suma = stawka * godziny;
                cout << "brutto = " << suma << endl;
                if (suma<=700)
                {
                    suma = 0.85 * suma;
                    cout << "netto = " << suma << endl;
                }
                else if (suma > 700 && suma <= 1200)
                {
                    suma = 0.8 * suma;
                    cout << "netto = " << suma << endl;
                }
                else
                {
                    suma = 0.75 * suma;
                    cout << "netto = " << suma << endl;
                }

            }
            else
            {
                suma = stawka * 40 + (stawka*2)*(godziny-40);
                cout << "brutto = " << suma << endl;
                if (suma<=700)
                {
                    suma = 0.85 * suma;
                    cout << "netto = " << suma << endl;
                }
                else if (suma > 700 && suma <= 1200)
                {
                    suma = 0.8 * suma;
                    cout << "netto = " << suma << endl;
                }
                else
                {
                    suma = 0.75 * suma;
                    cout << "netto = " << suma << endl;
                }
            }
        }
        break;

        case'c':
        {
            stawka = 30;
            if (godziny <= 40)
            {
                suma = stawka * godziny;
                cout << "brutto = " << suma << endl;
                if (suma<=700)
                {
                    suma = 0.85 * suma;
                    cout << "netto = " << suma << endl;
                }
                else if (suma > 700 && suma <= 1200)
                {
                    suma = 0.8 * suma;
                    cout << "netto = " << suma << endl;
                }
                else
                {
                    suma = 0.75 * suma;
                    cout << "netto = " << suma << endl;
                }

            }
            else
            {
                suma = stawka * 40 + (stawka*2)*(godziny-40);
                cout << "brutto = " << suma << endl;
                if (suma<=700)
                {
                    suma = 0.85 * suma;
                    cout << "netto = " << suma << endl;
                }
                else if (suma > 700 && suma <= 1200)
                {
                    suma = 0.8 * suma;
                    cout << "netto = " << suma << endl;
                }
                else
                {
                    suma = 0.75 * suma;
                    cout << "netto = " << suma << endl;
                }
            }
        }
        break;

        case'D':
        {
            stawka = 35;
            if (godziny <= 40)
            {
                suma = stawka * godziny;
                cout << "brutto = " << suma << endl;
                if (suma<=700)
                {
                    suma = 0.85 * suma;
                    cout << "netto = " << suma << endl;
                }
                else if (suma > 700 && suma <= 1200)
                {
                    suma = 0.8 * suma;
                    cout << "netto = " << suma << endl;
                }
                else
                {
                    suma = 0.75 * suma;
                    cout << "netto = " << suma << endl;
                }

            }
            else
            {
                suma = stawka * 40 + (stawka*2)*(godziny-40);
                cout << "brutto = " << suma << endl;
                if (suma<=700)
                {
                    suma = 0.85 * suma;
                    cout << "netto = " << suma << endl;
                }
                else if (suma > 700 && suma <= 1200)
                {
                    suma = 0.8 * suma;
                    cout << "netto = " << suma << endl;
                }
                else
                {
                    suma = 0.75 * suma;
                    cout << "netto = " << suma << endl;
                }
            }
        }
        break;

        default: cout << "Nie poprawna kategoria zaszeregowania !" << endl;
    }

    return 0;
}
