#include <iostream>
#include <math.h>

using namespace std;

void iloczyn ()
{
    int a, b;
    cout << "Podaj dwie liczby" << endl;
    cin >> a >> b;
    cout << "Iloczyn = " << a * b;
}

int main()
{
    iloczyn();
    return 0;
}
