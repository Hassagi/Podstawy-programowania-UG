#include <iostream>

using namespace std;

int main()
{
    float n, i, wynik = 0;

    cout << "Podaj n" << endl;
    cin >> n;

    for (i=1;i<=n;i++)
    {
        wynik = wynik + i/(i+1);
        cout << "wynik = " << wynik << endl;
    }

    return 0;
}
