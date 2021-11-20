#include <iostream>

using namespace std;

int main()
{
    int liczba;
    cout << "podaj liczbę " << endl;
    cin >> liczba;

    switch (liczba)
    {
    case 2: cout << "niedostateczny" << endl;
    break;
    case 3: cout << "dostateczny" << endl;
    break;
    case 4: cout << "dobry" << endl;
    break;
    case 5: cout << "bardzo dobry" << endl;
    break;
    case 6: cout << "celujący" << endl;
    break;
    default: cout << "podaj inną liczbę" << endl;
    break;


    }


    return 0;
}
