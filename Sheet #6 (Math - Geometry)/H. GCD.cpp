#include <iostream>
using namespace std;
long long int  gcd(long long int a,long long int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    long long int a,b; cin>>a>>b;
    if(a<b)swap(a,b);
    cout<<gcd(a,b)<<" ";
    long long int n=a;
    while(a%b!=0)
        a+=n;
    cout<<a;
    return 0;
}
