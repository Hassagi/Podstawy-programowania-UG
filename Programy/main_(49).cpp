#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a,b, pole;
    string figura1, kwadrat, prostokat, trojkat;
    int figura2;

    cout << "Podaj wymiary wigury" << endl;
    cin >> a >> b;
    cout << "Podaj figurę geometryczną" << endl;
    cin >> figura1;

    if (figura1 == "kwadrat")
    {
        figura2 = 1;
    }
    else if (figura1 == "prostokąt")
    {
        figura2 = 2;
    }
    else if (figura1 == "trójkąt")
    {
        figura2 = 3;
    }
    else
        figura2 = 4;

    switch (figura2)
    {
        case 1:
        {
            pole = pow(a,2);
            cout << "Pole figury wynosi: " << pole << endl;
            pole = pow(b,2);
            cout << "Pole figury wynosi: " << pole << endl;
        }
        break;
        case 2:
        {
            pole = a * b;
            cout << "Pole figury wynosi: " << pole << endl;
        }
        break;
        case 3:
        {
            pole = (a * b) / 2;
            cout << "Pole figury wynosi: " << pole << endl;
        }
        break;
        default: cout << "" << endl;
        break;
    }

    return 0;
}
