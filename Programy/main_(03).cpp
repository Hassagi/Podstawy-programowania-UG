#include <iostream>

using namespace std;

void F(int &i);
// & adres zmiennej

int main()
{
    int n = 2;
    cout << n << endl;
    F(n);
    cout << n;

    return 0;
}

void F(int &i)
{
    i = i + 5;
}
