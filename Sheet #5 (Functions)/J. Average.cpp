#include <iostream>
#include<iomanip>
using namespace std;
void a(){


    int i, count;
    double sum, inputArray[10000];
    double average;


    cin >> count;


    for (i = 0; i < count; i++) {
        cin >> inputArray[i];
    }

    sum = 0;

    for (i = 0; i < count; i++) {
        sum += inputArray[i];
    }

    average = (float)sum / count;
    cout << fixed << setprecision(6) << average;

    






}

int main() {
    a();
   
}
