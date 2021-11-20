#include <iostream>

using namespace std;

bool pierwsza (int p)
{
    int i;
    for (i = 2 ; i < p ; i++)
    {
        if(p%i == 0)
        {
            return false;
        }
    }
    if (p==0||p==1)
    {
        return false;
    }
    return true;
}

int main()
{
    int n;

    cout << "Podaj wypisujący wszystkie liczby pierwsze z przedziału [2,n]" << endl;
    cout << "Podaj liczbę n: " << endl;
    cin >> n;

    for(int i = 0 ; i < n ; i++)
    {
        if (pierwsza(i) == true)
        {
            cout << i << endl;
        }
    }

    return 0;
}
