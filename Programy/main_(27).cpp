#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x, y;

    cout << "podaj x" << endl;
    cin >> x;
    cout << "podaj y" << endl;
    cin >> y;

    //zbiór 1
    if ( ((pow(x+5,2) + pow (y-5,2)) <= 25) && y >= -x )
    {
        cout << "punkt: " << x << " " << y << " należy do zbioru nr 1 " << endl;
    }
    else
    {
        cout << "punkt: " << x << " " << y << " nie należy do zbioru nr 1 " << endl;
    }

    //zbiór 5
    if ( ((x<=10 && x>=0) && (y<=10 && y>=0)) && ((pow(x,2) + pow (y,2)) >= 100) && y >= x)
    {
        cout << "punkt: " << x << " " << y << " należy do zbioru nr 5 " << endl;
    }
    else
    {
        cout << "punkt: " << x << " " << y << " nie należy do zbioru nr 5 " << endl;
    }

    // zbiór 1 lub zbiór 5
    if ( (((pow(x+5,2) + pow (y-5,2)) <= 25) && y >= -x) || (((x<=10 && x>=0) && (y<=10 && y>=0)) && ((pow(x,2) + pow (y,2)) >= 100) && y >= x) )
    {
        cout << "punkt: " << x << " " << y << " należy do zbioru nr 1 lub do zbioru nr 5 " << endl;
    }
    else
    {
        cout << "punkt: " << x << " " << y << " nie należy do zbioru nr 1 lub do zbioru nr 5 " << endl;
    }

    return 0;
}
