 
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double x1, x2, y1,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	double z = (x2 - x1) ;
	double r = pow(z, 2);
	double l = (y2 - y1) ;
double e = pow(l, 2);
	double s = sqrt(r + e);
	cout  << fixed << setprecision(9)<<s;
	
}

 
