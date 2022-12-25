#include <iostream>

using namespace std;

int main()
{
  string x;
  cin>>x;
  int z=x[0]-'0';
  int c=x[1]-'0';
  if(c==0){
    cout<<"YES";
  return 0;
}
if(z%c==0||c%z==0)
   cout<<"YES";
   else
    cout<<"NO";
}
