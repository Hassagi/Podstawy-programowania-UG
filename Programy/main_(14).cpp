#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

int main()
{
    int tab[100], a, b, n, ilosc = 0, j, maks, temp;

    cout << "Podaj początek przedziału" << endl;
    cin >> a;
    cout << "Podaj koniec przedziału" << endl;
    cin >> b;
    cout << "Podaj rozmiar tablicy" << endl;
    cin >> n;

    srand(time(NULL));
    for (int i = 0 ; i <= n-1 ; i++)
    {
        tab[i] = rand()%(b - a + 1) + a;
    }

    cout << "Oto elementy listy: " << endl;
    for (int i = 0 ; i < n ; i++)
    {
        cout << tab[i] << " ";
    }


    /*for (int i = n - 1 ; i < 0 ; i--)
    {
        if ()
    }
    */
    cout << endl;

    maks = ilosc;

    for (j = 1 ; j <= b ; j++)
    {
        for (int i = 0 ; i < n ; i++)
        {
            if (tab[i] == j)
            {
            ilosc = ilosc + 1;
            }
        }
        if (ilosc > maks)
        {
            maks = ilosc;
            temp = j;
        }
        cout << "liczba " << j << " wystąpiła: " << ilosc << " razy" << endl;
        ilosc = 0;
    }
    cout << "najczęściej występuje liczba: " << temp << endl;

    return 0;
}
