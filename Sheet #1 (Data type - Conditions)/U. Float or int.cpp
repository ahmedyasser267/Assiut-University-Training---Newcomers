#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    float x;
    cin>>x;
    if(x== (int) x )
        cout<<"int"<<" "<<x;
    else
        cout<<"float"<<" "<<floor(x)<<" "<<x-floor(x);
}
