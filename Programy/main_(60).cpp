#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x,y;
    cout << "Podaj wartość x" << endl;
    cin >> x;
    y = pow(x,5) + cos(x) + pow(M_E,4*x-7);
    cout << "Y = " << y << endl;
    return 0;
}
