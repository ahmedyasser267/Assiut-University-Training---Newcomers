#include <iostream>

using namespace std;

int main()
{
    double discount ,prics;
    cin>>discount>>prics;
    double pre=100-discount;
    double prires=prics/pre;
    double res =(prires*discount)+prics;
    cout<<res<<endl;

}
