#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int tab[100], a, b, n, x, ile = 0;

    cout << "Podaj początek przedziału" << endl;
    cin >> a;
    cout << "Podaj koniec przedziału" << endl;
    cin >> b;
    cout << "Podaj rozmiar tablicy" << endl;
    cin >> n;
    cout << "Podaj liczbę x" << endl;
    cin >> x;

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

    for (int i = 0 ; i < n ; i++)
    {
        if (tab[i] == x)
        {
            ile = ile + 1;
        }
    }
    cout << "Liczba " << x << " wystąpiła " << ile << " raz(y)" << endl;



    return 0;
}
