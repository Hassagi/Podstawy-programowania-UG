#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a,b,c,delta,x1,x2;

    cout << "Podaj a" << endl;
    cin >> a;
    cout << "Podaj b" << endl;
    cin >> b;
    cout << "Podaj c" << endl;
    cin >> c;

    if (a!=0)
    {
        delta = pow(b,2)-4*a*c;

        if (delta > 0)
        {
            x1 = (-b-sqrt(delta))/(2*a);
            x2 = (-b+sqrt(delta))/(2*a);

            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
        else if (delta == 0)
        {
            x1 = (-b-sqrt(delta))/(2*a);
            cout << "x = " << x1 << endl;
        }
        else
        {
            cout << "delta < 0" << endl;
        }
    }



    return 0;
}
