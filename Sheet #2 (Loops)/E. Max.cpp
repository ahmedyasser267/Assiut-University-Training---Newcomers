#include <iostream>

using namespace std;

int main()
{
int n,maxi=-1,x;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>x;
    maxi=max(maxi,x);

}
cout<<maxi;
}
