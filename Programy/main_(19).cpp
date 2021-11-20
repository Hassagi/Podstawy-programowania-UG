#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

int main()
{
    int tab[100], a, b, n, wynik;
    int minimum, j, i;

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
    cout << endl;
    cout << endl;

    minimum = tab[0];
    cout << "minimum = " << minimum << endl;

    for (i = 0 ; i < n ; i++)
    {
        cout << "i= " << i << endl;
        if(tab[i] < minimum)
        {
            minimum = tab[i];
        }
    }



    cout << endl;
    cout << "minimum = " << minimum << endl;
    cout << "indeks = " << i << endl;

    return 0;
}




