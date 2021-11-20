#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int tab[10][10], n, m, i, j;

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

    for (i = 0 ; i < n ; i++)
    {
        for (j = 0 ; j < i ; j++)
        {
            if (tab[i][j] != 0 )
            {
                cout << "miacierz nie jest trójkątna" << endl;
                return 0;
            }
        }
    }


    return 0;
}
