#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int liczba;
    double pierwiastek;
    cout << "Podaj liczbę całkowitą" << endl;
    cin >> liczba;
    if (liczba >=0)
    {
        pierwiastek = sqrt(liczba);
        cout << "pierwiastek z liczby wymnosi: " << pierwiastek << endl;
    }
    else
    {
        cout << "Podaj liczbę dodatnią !" << endl;
    }

    return 0;
}
