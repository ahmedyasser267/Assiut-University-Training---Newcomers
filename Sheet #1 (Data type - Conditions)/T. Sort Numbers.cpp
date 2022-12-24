#include<bits/stdc++.h>
using namespace std;

int main()
{
   vector <int>x(3);
   vector<int >y(3);

   for(int i=0;i<3;i++)


    cin>>x[i];
    y=x;
   sort(x.begin(),x.end());
for(int i=0;i<3;i++)
    cout<<x[i]<<endl;
    cout<<endl;
    for(int i=0;i<3;i++)
    cout<<y[i]<<endl;


}
