#include <iostream>

using namespace std;

int main()
{
    double x,y,a,b,c,d;

    cout << "Podaj wartość a" << endl;
    cin >> a;
    cout << "Podaj wartość b" << endl;
    cin >> b;
    cout << "Podaj wartość c" << endl;
    cin >> c;
    cout << "Podaj wartość d" << endl;
    cin >> d;
    cout << "Podaj wartość x" << endl;
    cin >> x;

    y = (a*x + b)*(c + d);

    cout << "Wartość funkcji w punkcie x = " << x << " wynosi: " << y << endl;

    return 0;
}
