#include <iostream>

using namespace std;


int main()
{
    int x,b,i,n;
    cin >>x>>b;
    for( i=1; i<=x; i++)

    {
        if(x%i==0&&b%i==0)
            n=i;


    }
    cout<<n;
    return 0;
}
