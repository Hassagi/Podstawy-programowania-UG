#include <iostream>
#include <math.h>

using namespace std;

void iloczyn(int x, int y)
{
    cout << "Iloczyn = " << x * y << endl;
}

int main()
{
    int a, b;
    cout << "Podaj dwie liczby" << endl;
    cin >> a >> b;
    iloczyn(a, b);

    return 0;
}
