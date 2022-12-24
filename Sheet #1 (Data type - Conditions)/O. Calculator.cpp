#include <iostream>
#include<cstring>
using namespace std;
 
int main()
{
  long long a,b;
   char s='+'||'-'||'*'||'/';
   cin>>a>>s>>b;
   if(s=='+')
    cout<<a+b;
   if(s=='-')
    cout<<a-b;
    if(s=='*')
    cout<<a*b;
    if(s=='/')
    cout<<a/b;
}
