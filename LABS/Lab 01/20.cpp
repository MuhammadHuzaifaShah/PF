#include<iostream>
using namespace std;
int main(){
    float payAmount, payPeriod, totalPay;
    payAmount = 2200.0; // Bi-weekly pay amount
    payPeriod = 26.0;
    totalPay = payAmount * payPeriod;
    cout << "Total Annual Pay: $" << totalPay << endl;
    return 0;
}