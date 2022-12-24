 #include <iostream>
#include <cmath>
#include<conio.h>
using namespace std;
int main()
{
    char c;
    cin>>c;
    int s=c;
    if(s>=65&&s<=90)
        cout<<"ALPHA\n"<<"IS CAPITAL";
    else if(s>=97&&s<=122)
         cout<<"ALPHA\n"<<"IS SMALL";
    else if(s>=47&&s<=57)
        cout<<"IS DIGIT";
}
