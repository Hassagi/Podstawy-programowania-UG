#include <iostream>

using namespace std;

int main()
{
    int liczba, n, wynik = 0;

    cout << "Podaj liczbę " << endl;
    cin >> n;

    for (int i = 2 ; i < n ; i++)
    {
        if(n%i==0)
        {
            cout << "liczba nie jest pierwsza" << endl;
            return 0;
        }
    }
    cout << "liczba jest pierwsza" << endl;

    return 0;
}
