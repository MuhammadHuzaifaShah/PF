#include<iostream>
using namespace std;
int main(){
    int units;
    float rate, fixed_charge, total_bill;
    fixed_charge=250.0;
    cout << "Enter number of units consumed: ";
    cin >> units;
    cout << "Enter rate per unit: ";
    cin >> rate;
    total_bill = fixed_charge + (units * rate);
    cout << "Total Electricity Bill: " << total_bill << "rupees" << endl;
    return 0;
}