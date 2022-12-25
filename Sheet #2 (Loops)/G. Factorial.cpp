#include <iostream>
#include<vector>
using namespace std;
   long long fact(long long x)
   {
       if (x == 0)
        return 1;
    return x * fact(x - 1);
   }
int main()
{
int t,x;
cin>>t;
while(t--){
    cin>>x;
    cout<<fact(x)<<endl;
}
}
