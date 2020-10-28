#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    bool x = true, y = true;
    int a , b;

    cout << " vuvedete cialo chislo: ";
    cin >> a;

    if (a%2 != 0) 
    {
        x = false;
    }

    if (x == true) 
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" <<endl;
    }

    cout << " vuvedete cialo chislo: ";
    cin >> b;

    if (b % 2 !=0 && b % 3 != 0 && b % 5 != 0)
    {
        y = false;
    }

    if (y == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    //kodut mojeshe da bude napraven mnogo po prosto, no iskah da uprajnia boolean. predvaritelno se izviniavam za prichinenata bolka ot prochita mu
}
