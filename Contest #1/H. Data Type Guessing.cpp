#include <iostream>
#include<cmath>
using namespace std;
 
int main()
{
double n1,n2,n3;
cin>>n1>>n2>>n3;
double res1=(n1*n2)/n3;
long long l1=res1;
double res2=res1-l1;
if(res2>0){
    cout<<"double";
    return 0;
}
else if(l1<=2147483647)
    cout<<"int";
else
    cout<<"long long";
 
}
