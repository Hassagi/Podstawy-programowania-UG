#include <iostream>

using namespace std;

void funkcja (int &a, int &b)
{
    a = 2 * a;
    b = b + 100;
}

int main()
{
    int a,b;

    cout << "Podaj a" << endl;
    cin >> a;
    cout << "Podaj b" << endl;
    cin >> b;

    funkcja(a,b);
    cout << a << " " << b << endl;

    return 0;
}
