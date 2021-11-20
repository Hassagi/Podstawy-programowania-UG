#include <iostream>

using namespace std;

int main()
{
    int n, j;
    float suma = 0, srednia;
    int tab[100];

    cout << "podaj ilość elementów ";
    cin >> n;
    cout << endl;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> tab[i];
    }

    for(j = 0 ; j < n ; j++)
    {
        suma = suma + tab[j];
    }

    srednia = suma / j;

    cout << "suma = " << suma << endl;
    cout << "średnia = " << srednia << endl;

    return 0;
}
