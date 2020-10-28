#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int chislo, a, b, c, d;

    cout << " vuvedete chetiricifreno chislo: ";
    cin >> chislo;

    if (chislo < 1000 || chislo > 9999 )
    {
        cout << " chisloto ne e validno";
        return 0;
    }

    a = (chislo / 1000) % 10;
    b = (chislo / 100) % 10;
    c = (chislo / 10) % 10;
    d = chislo % 10;

    if (a == b || a == c || a == d || b == c || b == d || c == d)
    {
        cout << "NO, not all numbers are different!";
    }
    else
    {
        cout << "YES, all the numbers are different!";
    }
}
