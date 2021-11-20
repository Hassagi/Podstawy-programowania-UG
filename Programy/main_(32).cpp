#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i, n, s;

    cout << "Podaj n" << endl;
    cin >> n;

    s = 0;
    i = 1;

    while(i<n)
    {
        if(n % i == 0)
        {
            s = s+i;
        }
        i++;

    }
    if (s == n)
    {
        cout << "liczba doskonała" << endl;
    }
    else
        cout << "liczba nie doskonała" << endl;


    return 0;
}
