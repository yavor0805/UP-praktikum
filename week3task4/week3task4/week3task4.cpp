#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	int hours, minutes;
	cout << " Insert the hours and the minutes: "<<endl;
	cin >> hours >> minutes;
	

	minutes = minutes + 30;
	if (minutes > 59)
	{
		hours = hours++;
		minutes = minutes - 60;
	}
	if (hours > 23)
	{
		hours = 0;
	}
	cout << hours << ":" << minutes;


}
