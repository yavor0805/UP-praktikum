#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    //int a = 0, b = 0, c = 0;
    //double x1 = 0, x2 = 0, D = 0;
    //cout << "Insert a, b and c of the square equation: "<<endl;
    //cin >> a;
    //cin >> b;
    //cin >> c;

   // if (a == 0)
   // {
        //cout << "Not a quadric equation !";
    //}
    //else
   // {
        //D = pow(b, 2) - 4 * (a * c);
        //if (D < 0) 
        //{
            //cout << "The equation has no real roots !";
        //}
        //if (D == 0)
        //{
           // x1 = ((-1) * b) / 2 * a;
            //cout << "The equation has a single double root: " << x1 << endl;
        //}
        //if (D > 0)
        //{
           //x1 = ((-1) * b + sqrt(D)) / 2 * a;
           // x2 = ((-1) * b - sqrt(D)) / 2 * a;
            //cout << "X1 = " << x1 << "  X2 = " << x2 << endl;
        //}
    //}

    int a = 0, b = 0, c = 0;
    double x1 = 0, x2 = 0, x3 = 0, x4 = 0, t1 = 0, t2 = 0, D = 0;
    cout << "Insert a, b and c of the square equation: "<<endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a == 0)
         {
             cout << "Not a quadric equation !";
         }
    else 
    {

        D = pow(b, 2) - 4 * (a * c);

        if (D == 0)
        {
            t1 = ((-1) * b) / 2 * a;
            if (t1 >= 0)
            {
                x1 = sqrt(((-1) * b) / 2 * a);
                x2 = x1 * (-1);
                cout << "X1 = " << x1 << "  X2 = " << x2 << endl;
            }
            else
            {
                cout << "The equation has no real roots !" << endl;
            }
        }
        if (D > 0)
        {
            t1 = ((-1) * b + sqrt(D)) / 2 * a;
            if (t1 >= 0)
            {
                x1 = sqrt(((-1) * b + sqrt(D)) / 2 * a);
                x2 = x1 * (-1);
                cout << "X1 = " << x1 << "  X2 = " << x2;
            }
            else
            {
                cout << " X1 and X2 aren't real numbers , ";
            }
            t2 = ((-1) * b - sqrt(D)) / 2 * a;
            if (t2 >= 0)
            {
                x3 = sqrt(((-1) * b - sqrt(D)) / 2 * a);
                x4 = x3 * (-1);
                cout << " X3 = " << x3 << " X4 = " << x4 << endl;
            }
            else
            {
                cout << " ,X3 and X4 arent real numbers.";
            }
        }
    }








}