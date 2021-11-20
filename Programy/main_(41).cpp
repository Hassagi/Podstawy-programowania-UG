#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int i, los, suma = 0;

    srand(time(NULL));
    los = rand()%21;

    cout << "losowa liczba: " << los << endl;

    while(i!=los)
    {
        i = rand()%21;
        suma = suma + i;
        cout << "i = " << i << endl;
        cout << "suma = " << suma << endl;
    }
    //cout << "Suma = " << suma << endl;

    return 0;
}

