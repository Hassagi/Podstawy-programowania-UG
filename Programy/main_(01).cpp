#include <iostream>

using namespace std;

void prost(float a, float b , float c, float &objetosc, float &pole)
{
    pole = 2*a*b + 2*b*c + 2*a*c;
    objetosc = a*b*c;
}

int main()
{
    float a, b, c, obj, pol;

    cout << "Podaj dlugosc " << endl;
    cin >> a;
    cout << "Podaj szerokosc " << endl;
    cin >> b;
    cout << "Podaj wysokosc " << endl;
    cin >> c;
    cout << endl;

    prost(a,b,c,obj,pol);

    cout << "objetosc = " << obj << endl;
    cout << "pole = " << pol << endl;

    return 0;
}
