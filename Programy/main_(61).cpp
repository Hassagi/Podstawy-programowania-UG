#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double F,C;

    cout << "Podaj stopnie celcjusza" << endl;
    cin >> C;
    F = 32 + 1.8*C;
    cout << "F = " << F << endl;
    return 0;
}
