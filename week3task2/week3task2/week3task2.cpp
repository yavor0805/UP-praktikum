#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int x = 0, y = 0, sum = 0;
    char action = 0;
    cout << "Enter calculation: ";
    cin >> x;
    cin >> action;
    cin >> y;

    switch (action)
    {
    case '+':
        sum = x + y;
        cout << x << action << y << " = " << sum << endl;
        break;ConsoleApplication1
    case '-':
        sum = x - y;
        cout << x << action << y << " = " << sum << endl;
        break;
    case '/':
        if (y == 0) 
        {
            cout << x << action << y << "=" << "???" << endl;
            break;
        }
        else 
        {
            sum = x / y;
            cout << x << action << y << " = " << sum << endl;
            break;
        }
    case '*':
        sum = x * y;
        cout << x << action << y << " = " << sum << endl;
        break;

    default:
        cout << "Calculator can't recognise this symbol" << endl;
        break;
    }
}
