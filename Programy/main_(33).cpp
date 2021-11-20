#include <iostream>

using namespace std;

int main()
{
    int h;

    cout << "Podaj h" << endl;
    cin >> h;



    for (int i = 0;i < h ; i++)
    {
        for(int j = 1 ; j < h-i; j++)
        {
        cout << " ";
        }
        for(int j = 0; j < 2*i+1;j++)
        {
        cout << "*";
        }
        cout << endl;
    }


    return 0;
}
