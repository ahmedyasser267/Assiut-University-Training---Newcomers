#include<iomanip>
#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    float s = (a + b + c) / 2;
    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "Valid" << endl;
        cout << fixed << setprecision(6) << sqrt(s * (s - a) *
            (s - b) * (s - c));
        return 0;
    }
    else
    {
        cout << "Invalid";
    }

}
