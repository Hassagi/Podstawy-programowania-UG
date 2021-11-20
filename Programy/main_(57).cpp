#include <iostream>

using namespace std;

int main()
{
    double liczba;
    cout << "Wprowadz liczbę" << endl;
    cin >> liczba;

    if (liczba > 0)
    {
        cout << "wprowadzona liczba jest większa od 0" << endl;
    }
    else if (liczba == 0)
    {
        cout << "liczba jest równa 0" << endl;
    }
    else
    {
        cout << "liczba jest mniejsza od zera" << endl;
    }


    return 0;
}
