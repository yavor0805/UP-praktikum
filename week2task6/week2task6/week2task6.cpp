#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    char x;
    cout << " vuvedete bukva: " << endl;
    cin >> x;

    //if (x >= 'a' && x <= 'z')
    //{
        //cout << "Lower case letter";
    //}
    //if (x >= 'A' && x <= 'Z')
    //{
        //cout << "Upper case letter";
    //}
    //if (x >= '0' && x <= '9')
    //{
        //cout << "The character is NOT a letter";
    //}

    //kodut pod formata na note e purvoto uslovie. pod tozi red programata shte izvejda obratnoto na vuvedenata bukva

    if (x >= 'a' && x <= 'z')
    {
         x = x - 32;
         cout << x;
    }
    else
    {
        if (x >= 'A' && x <= 'Z')
        {
            x = x + 32;
            cout << x;
        }
    }
    if (x >= '0' && x <= '9')
    {

    cout << "The character is NOT a letter";
    }

}
