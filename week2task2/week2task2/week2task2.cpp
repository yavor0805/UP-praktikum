#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout << " vuvedete stranite na triugulnika: " << endl;

    cin >> a;
    cin >> b;
    cin >> c;

    if (a < b + c && b < c + a && c < b + a)
    {
        cout << "YES, you can make a triangle out of this :)";
    }
    else
    {
        cout << "NO, you can't make a triangle out of this :(";
    }

}

