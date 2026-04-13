#include<iostream>
using namespace std;
int main(){
    float usd_amount, remaining_usd, exchange_amount;
    cout << "Enter amount in USD: ";
    cin >> usd_amount;
    remaining_usd=usd_amount-5;
    exchange_amount = remaining_usd* 0.92; // Example: 1 USD = 0.85 EUR
    cout << "Remaining USD: $" << remaining_usd << endl;
    cout << "Amount in EUR: $" << exchange_amount << endl;
    return 0;
}