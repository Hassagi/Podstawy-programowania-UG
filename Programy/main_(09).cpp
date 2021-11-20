#include <iostream>
#include <math.h>

using namespace std;

int iloczyn()
{
    int a, b;
    cout << "Podaj a" << endl;
    cin >> a;
    cout << "Podaj b" << endl;
    cin >> b;
    return a * b;
}

int main()
{
    cout << "iloczyn = " << iloczyn() << endl;
    return 0;
}


