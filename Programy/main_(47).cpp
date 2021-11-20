#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

int main()
{
    int p, q, mod;
    float wygrana;

    cout << "Podaj pierwszą liczbę " << endl;
    cin >> p;
    cout << "Podaj drugą liczbę " << endl;
    cin >> q;

    mod = p%2;

    if (mod == 0)
    {
        if (q == 2 || q == 4 || q == 5)
        {
            wygrana = p + 3 * q;
            cout << "Wygrana = " << wygrana << endl;
        }
        else if (q == 1 || q == 3 || q == 6)
        {
            wygrana = 2*q;
            cout << "Wygrana = " << wygrana << endl;
        }
        else
            cout << "Podaj inną liczbę" << endl;
    }
    else
    {
        if (q == 1 || q == 3 || q == 6)
        {
            if (p == q)
            {
                wygrana = 5 * p + 3;
            }
            else
            {
                wygrana = 2 * q + p;
            }
            cout << "Wygrana = " << wygrana << endl;
        }
        else if (q == 2 || q == 4 || q == 5)
        {
            if(p == 5)
            {
                wygrana = fmin(p,q) + 4 + 5;
            }
            else
            {
                wygrana = fmin(p,q) + 4;
            }
            cout << "Wygrana = " << wygrana << endl;
        }
        else
            cout << "Podaj inną liczbę" << endl;
    }

    return 0;
}
