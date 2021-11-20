#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int h;

    cout << "Podaj h" << endl;
    cin >> h;

    for (int i = 1 ; i <= h ; i++)
    {
        for (int j = 1 ; j <= i ; j++)
        {
            cout << j*i << " ";
        }
        cout << endl;
    }

    return 0;
}
