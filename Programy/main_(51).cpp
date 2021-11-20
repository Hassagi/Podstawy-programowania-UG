#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c,lewa_strona, prawa_strona;

    cout << "Podaj a" << endl;
    cin >> a;
    cout << "Podaj b" << endl;
    cin >> b;
    cout << "Podaj c" << endl;
    cin >> c;


    if (a>b && a>c)
    {
        lewa_strona = pow(b,2)+pow(c,2);
        prawa_strona = pow(a,2);
        if(lewa_strona==prawa_strona)
        {
            cout << "to jest trójka pitagorejska" << endl;
        }
        else cout << "to nie jest trójka pitagorejska" << endl;
    }

    if(b>a && b>c)
    {
        lewa_strona = pow(a,2)+pow(c,2);
        prawa_strona = pow(b,2);
        if(lewa_strona==prawa_strona)
        {
            cout << "to jest trójka pitagorejska" << endl;
        }
        else cout << "to nie jest trójka pitagorejska" << endl;
    }

    if(c>a && c>b)
    {
        lewa_strona = pow(a,2)+pow(b,2);
        prawa_strona = pow(c,2);
        if(lewa_strona==prawa_strona)
        {
            cout << "to jest trójka pitagorejska" << endl;
        }
    }
    if (a==b || b==c || c==a || ((a==b)&&(b==c)))
    {
        cout << "to nie jest trójka pitagorejska" << endl;
    }


    return 0;
}
