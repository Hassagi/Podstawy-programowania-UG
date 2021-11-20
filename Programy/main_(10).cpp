#include <iostream>
#include <math.h>

using namespace std;

int iloczyn1 (int a, int b)
    {
        int p = a * b;
        return p;
    }

int main()
{
    int liczba1, liczba2, wynik ;
    cout << "Podaj pierwszą liczbę" << endl;
    cin >> liczba1;
    cout << "Podaj drugą liczbę" << endl;
    cin >> liczba2;

    wynik = iloczyn1(liczba1, liczba2);
    cout << "Wynik to: " << wynik << endl;

    return 0;
}
