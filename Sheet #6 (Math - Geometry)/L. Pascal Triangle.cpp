#include<iostream>
using namespace std;

int main()
{
    int rows;
  
    cin >> rows;
    

    for (int i = 0; i < rows; i++)
    {
        int val = 1;
        for (int j = 1; j < (rows - i); j++)
        {
           
        }
        for (int k = 0; k <= i; k++)
        {
            cout << " " << val;
            val = val * (i - k) / (k + 1);
        }
        cout << endl ;
    }
    cout << endl;
    return 0;
}
