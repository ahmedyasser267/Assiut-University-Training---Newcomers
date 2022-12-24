#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int num1,num2,num3,num4;
  cin>>num1>>num2>>num3>>num4;
  int newn1=num1%100;
  int newn2=num2%100;
  int newn3=num3%100;
  int newn4=num4%100;

  int res=(newn1*newn2*newn3*newn4);

  if(res%100<=9)
    cout<<"0"<<res%100<<endl;
  else
    cout<<res%100;
}
