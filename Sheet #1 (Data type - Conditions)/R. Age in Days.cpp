#include <iostream>
 
using namespace std;
 
int main()
{
   int y=0,n,m=0;
   cin>>n;
if(n/365){
    
    y=n/365;
 
    n=n-365*y;
}
if(n/30){
    m=n/30;
    n=n-30*m;
}
 //cout<<n/365<<"year";
 //m=n%365;
 //cout<<m/30<<"months";
 cout<<y<<" years\n"<<m<<" months\n"<<n<<" days\n";
 
}
