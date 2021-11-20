#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int suma = 0, n;

    cout << "Podaj liczbę n" << endl;
    cin >> n;

    for(int i = 1 ; i <= n ; i++)
    {
        //cout << "i = " << i << endl;
        suma = suma + pow(i,2);
        //cout << "suma = " << suma << endl;
    }
    cout << endl;
    cout << "suma = " << suma << endl;

    return 0;
}
