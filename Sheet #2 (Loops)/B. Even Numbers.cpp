#include <iostream>

using namespace std;

int main()
{
    int n, i =1 ;
    cin>>n;
    for (; i<=n ; i++)
    {
        if(i%2==0)
        cout <<i<<"\n";
    }
    if (n==1)
    cout<<"-1";
    return 0;
}
