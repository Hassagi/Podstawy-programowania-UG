#include <iostream>

using namespace std;

int main()
{
    for (int i = 10 ; i <= 99 ; i++)
    {
        cout << i << endl;
    }

    cout << endl;

    for (int i = 100 ; i <= 999 ; i++)
    {
        int mod = i % 13;
        if (mod == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}
