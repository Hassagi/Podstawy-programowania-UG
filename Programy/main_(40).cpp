#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int i, suma = 0, los;
    srand(time(NULL));
    los = rand()%21;
    cout << "wylosowana liczba: " << los << endl;

    do
    {
        i = rand()%21;
        suma = suma + i;
        cout << "i = " << i << endl;
        cout << "suma = " << suma << endl;
    } while (i != los);
    return 0;
}

