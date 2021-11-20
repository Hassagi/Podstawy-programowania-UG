#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int tab[10][10], n, m, a, b, temp;

    cout << "Podaj liczbę wierszy (n<=10): " ;
    cin >> n;
    cout << "Podaj liczbę kolumn  (m<=10): " ;
    cin >> m;
    cout << "Podaj pierwszy wiersz" << endl;
    cin >> a;
    cout << "Podaj drugi wiersz" << endl;
    cin >> b;

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

    for( int i = 0 ; i < n ; i++)
    {
        for( int j = 0 ; j < m ; j++)
        {
            temp = tab[a-1][j];
            tab[a-1][j] = tab[b-1][j];
            tab[b-1][j] = temp;
        }
    }

    cout << endl;

    for( int i = 0 ; i < n ; i++)
    {
        for( int j = 0 ; j < m ; j++)
            cout << tab[i][j] << " ";
        cout << endl;
    }

    return 0;
}
