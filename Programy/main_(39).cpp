#include <iostream>

using namespace std;

int main()
{
    int x, n, pow = 1;

    cout << "Podaj liczbe x" << endl;
    cin >> x;
    cout << "Podaj liczbe n" << endl;
    cin >> n;

    for(int i = 1 ; i <= n ; i++)
    {
        pow = pow * x;
    }
    cout << "wynik = " << pow << endl;

    return 0;
}

