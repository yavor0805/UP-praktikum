#include <cmath>
#include <iostream>
using namespace std;
int main()
{
   
    int year;
    cout << " vuvedete godina: ";
    cin >> year;
    if (year % 4 == 0 || year % 400 == 0)
    {
        if ( year % 100 == 0)
        cout << " The year is not leap";
        else {
            cout << " The year is leap";
        }
     }
    else
    {
        cout << " The year is not leap";
    }





}

