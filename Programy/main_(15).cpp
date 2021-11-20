#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int tab[10][10], n, m, temp;

    cout << "Podaj liczbę wierszy (n<=10): " ;
    cin >> n;
    cout << "Podaj liczbę kolumn  (m<=10): " ;
    cin >> m;
    cout << "Podaj pierwszy wiersz" << endl;

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
            /*temp1 = tab[0][0];
            temp2 = tab[0][n-1];
            tab[0][n-1] = temp1;
            tab[0][0] = temp2;

            temp3 = tab[n-1][0];
            temp4 = tab[n-1][n-1];
            tab[n-1][n-1] = temp3;
            tab[n-1][0] = temp4;*/

            for(i = 0 ; i < n ; i++)
            {
                temp = tab[i][i];
                tab[i][i] = tab[i][n-1-i];
                tab[i][n-1-i] = temp;
            }
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
