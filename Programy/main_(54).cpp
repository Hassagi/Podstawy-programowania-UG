#include <iostream>

using namespace std;

int main()
{
    float a,b,c,d,e,f,W,Wx,Wy,x,y;

    cout << "Podaj a" << endl;
    cin >> a;
    cout << "Podaj b" << endl;
    cin >> b;
    cout << "Podaj c" << endl;
    cin >> c;
    cout << "Podaj d" << endl;
    cin >> d;
    cout << "Podaj e" << endl;
    cin >> e;
    cout << "Podaj f" << endl;
    cin >> f;
    cout << endl;

    W = (a*d)-(b*c);
    Wx = (e*d)-(b*f);
    Wy = (a*f)-(e*c);

    cout << "W = " << W << endl;
    cout << "Wx = " << Wx << endl;
    cout << "Wy = " << Wy << endl;
    cout << endl;

    x = Wx/W;
    y = Wy/W;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
