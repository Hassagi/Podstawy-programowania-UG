#include <iostream>
#include <math.h>

using namespace std;

float F (float a, float b)
    {
        float p = sqrt(sqrt(a*a + b*b));
        return p;
    }

int main()
{
    float x, wynik, wynik2;

    cout << "Podaj x: " << endl;
    cin >> x;
    wynik = sqrt(sqrt(x*x + (x + 3)*(x + 3))) + 5 * sqrt(sqrt((3 * x)*(3 * x) + 100));
    wynik2 = F(x,x+3) + 5 * F(3*x, 10);
    cout << "Wartość wyrażenia1 to " << wynik << endl;
    cout << "Wartość wyrażenia2 to " << wynik2 << endl;

    return 0;
}
