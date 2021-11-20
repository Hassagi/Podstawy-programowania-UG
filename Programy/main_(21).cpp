#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

int main()
{
    int tab[100], a, b, n, wynik;
    int c, d;

    cout << "Podaj początek przedziału" << endl;
    cin >> a;
    cout << "Podaj koniec przedziału" << endl;
    cin >> b;
    cout << "Podaj rozmiar tablicy" << endl;
    cin >> n;
    cout << "Podaj c" << endl;
    cin >> c;
    cout << "Podaj d" << endl;
    cin >> d;

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

    for (int i = 0 ; i < n ; i++)
    {
        if (tab[i] >= c && tab[i] <= d)
        {
            cout << tab[i] << " ";
        }
    }
    cout << endl;

    return 0;
}


