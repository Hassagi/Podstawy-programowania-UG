#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

int main()
{
    int tab[100], a, b, n, wynik;
    int m, i, j;

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


    m = tab[0] + tab[1];
    j = 0;

    for (i = 0 ; i <= n-2 ; i++)
    {
        if(tab[i]+tab[i+1]>m)
        {
            m = tab[i] + tab [i+1];
            j = i;
        }
    }



    cout << endl;
    cout << tab[j] << " i " << tab[j+1] << endl;

    return 0;
}





