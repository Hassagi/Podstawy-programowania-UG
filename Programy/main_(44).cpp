#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, mod;
    cout << "Podaj liczbę n" << endl;
    cin >> n;
    cout << endl;

    for (int i = 1 ; i <= n ; i++)
    {
        if (n%i == 0)
        cout << i << endl;

    }
    cout << endl;

    int i = 1;
    while (i <= n)
    {
        if (n%i == 0)
        cout << i << endl;
        i++;
    }
    cout << endl;

    i = 1;
    do
    {
        if (n%i == 0)
        cout << i << endl;
        i++;
    }
    while(i <= n);

    return 0;
}
