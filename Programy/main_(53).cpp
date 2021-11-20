#include <iostream>

using namespace std;

int main()
{
    float a,b,c,liczba_max;

    cout << "podaj a" << endl;
    cin >> a;
    cout << "podaj b" << endl;
    cin >> b;
    cout << "podaj c" << endl;
    cin >> c;

    liczba_max = a;

    if (b>liczba_max)
    {
        liczba_max = b;
    }
    if (c>liczba_max)
    {
        liczba_max = c;
    }
    cout << "liczba największa: " << liczba_max << endl;

    return 0;
}
