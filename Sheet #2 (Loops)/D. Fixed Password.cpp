#include <iostream>
using namespace std;

int main()
{
    int x,pass=1999;;
    for (int i =0 ;;i++)
    {
        if(cin >> x)
        {
            if (x==pass)
            {
                cout<<"Correct"<<endl;
                break;
            }
            else 
                cout <<"Wrong"<<endl;
        }
        else
            break;
    }
    return 0;
}
