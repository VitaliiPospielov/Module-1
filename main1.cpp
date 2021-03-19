#include <iostream>
#define _USE_Math_DEFINES
#include<math.h>
using namespace std;
// Task ¹1 , variant 13

int main()
{
	double a, x, b, R;
	cout<<"Input a:";
	cin>>a;
	cout<<"Input b:";
	cin>>b;
	cout<<"Input x:";
	cin>>x;
	R = (a/(x-a))+((pow(b, x)+pow(cos(x), 3))/(pow(log(a), 3)+ 4.5));
	cout << "R:"<< R << endl;
	return 0;
}
