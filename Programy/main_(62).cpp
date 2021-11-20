#include <iostream>

using namespace std;

float max2(float liczba1, float liczba2)
{
    if (liczba1 >= liczba2)
    {
        return liczba1;
    }
    else return liczba2;
}

float max3(float liczba1, float liczba2, float liczba3)
{
    float temp1 = max2(liczba1, liczba2);
    float temp2 = max2(temp1,liczba3);

    if (temp1 >= temp2)
    {
        return temp1;
    }
    else
    {
        return temp2;
    }
}

int main()
{
    float a, b, c;

    cout << "Podaj pierwszą liczbę: " << endl;
    cin >> a;
    cout << "Podaj drugą liczbę: " << endl;
    cin >> b;
    cout << "Podaj trzecią liczbę: " << endl;
    cin >> c;

    cout << "liczba maksymalna = " << max3(a,b,c) << endl;

    return 0;
}
