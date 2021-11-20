#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int tab[10][10], n, m, maksimum, pom1, pom2, i, j;

    cout << "Podaj liczbę wierszy (n<=10): " ;
    cin >> n;
    cout << "Podaj liczbę kolumn  (m<=10): " ;
    cin >> m;

    srand(time(NULL));

    for( int i = 0 ; i < n ; i++)
        for (int j = 0 ; j < m ; j++)
            tab[i][j] = rand()%10;

    for( int i = 0 ; i < n ; i++)
    {
        for( int j = 0 ; j < m ; j++)
            cout << tab[i][j] << " ";
        cout << endl;
    }

    maksimum = tab[0][0];

    for( int i = 0 ; i < n ; i++)
        for (int j = 0 ; j < m ; j++)
        {
            if (tab[i][j] > maksimum)
            {
                pom1 = i;
                pom2 = j;
                maksimum = tab[i][j];
            }
        }

    cout << "element maksymalny: " << tab[pom1][pom2] << endl;
    cout << "wiersz = "  << pom1 + 1 << endl;
    cout << "kolumna = " << pom2 + 1 << endl;


    return 0;
}

/*
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int tab[10][10], n, m;

    cout << "Podaj liczbę wierszy (n<=10): " ;
    cin >> n;
    cout << "Podaj liczbę kolumn  (m<=10): " ;
    cin >> m;

    srand(time(NULL));

    for( int i = 0 ; i < n ; i++)
        for (int j = 0 ; j < m ; j++)
            tab[i][j] = rand()%10;

    for( int i = 0 ; i < n ; i++)
    {
        for( int j = 0 ; j < m ; j++)
            cout << tab[i][j] << " ";
        cout << endl;
    }


    return 0;
}
*/
