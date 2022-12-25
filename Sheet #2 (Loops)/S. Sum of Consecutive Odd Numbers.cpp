#include <iostream>

using namespace std;

int main()
{
    int counter;
    int x,y;
    cin>>counter;
    while(counter--){
          int  sum=0;
    cin>>x>>y;
    int min,max;
    if(x>=y)
    {
        max=x;
        min=y;

    }
    else
    if(y>=x)
    {
        max=y;
        min=x;

    }

    for(int i=min+1;i<=max-1;i++)
    {

        if(i%2!=0)
        {
            sum+=i;
        }
    }
    cout<<sum<<endl;
    }
}
