#include <iostream>

using namespace std;

float potega(float x, float y)
{
    float pom = x;
    x = 1;
    for (int i = 0 ; i < y ; i++)
    {
        x = x*pom;
    }
    return x;
}

int main()
{
    float a, b, c, n, wynik;
    cout << "Podaj a, b, c, n" << endl;
    cin >> a >> b >> c >> n;
    cout << endl;
    wynik = (potega(a, n) + potega(b, n + 5))/potega(c, 2 * n + 1);
    cout << potega(a, n)         << endl;
    cout << potega(b, n + 5)     << endl;
    cout << potega(c, 2 * n + 1) << endl;
    cout << "wynik = " << wynik << endl;

    return 0;
}

