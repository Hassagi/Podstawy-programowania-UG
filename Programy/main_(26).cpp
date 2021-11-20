#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i, n;
    double suma = 0;

    cout << "Podaj n" << endl;
    cin >> n;

    for(i = 0 ; i <= n ; i++)
    {
        suma = suma + 1/(pow(3,i));
    }
    cout << "suma = " << suma << endl;

    return 0;
}
