#include <iostream>

using namespace std;

int main()
{
    int n, k, wynik;
    long long silnia1 = 1, silnia2 = 1, silnia3 = 1;

    cout << "podaj liczbe n" << endl;
    cin >> n;
    cout << "podaj liczbe k" << endl;
    cin >> k;
    cout << endl;

    for (int i=1; i<=n; i++)
    {
        silnia1 = silnia1 * i;
    }
    cout << "n! = " << silnia1 << endl;

    for (int i=1; i<=k; i++)
    {
        silnia2 = silnia2 * i;
    }
    cout << "k! = " << silnia2 << endl;

    for (int i=1; i<=(n-k); i++)
    {
        silnia3 = silnia3 * i;
    }
    cout << "(n-k)! = " << silnia3 << endl;

    wynik = silnia1/(silnia2*silnia3);

    cout << endl;
    cout << "Wynik = " << wynik << endl;

    return 0;
}
