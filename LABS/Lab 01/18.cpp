#include<iostream>
using namespace std;
int main(){
    int amount, note500, note100,note10;
    cout << "Enter amount in rupees: ";
    cin >> amount;
    note500 = amount / 500;
    amount = amount % 500;
    note100 = amount / 100;
    amount = amount % 100;
    note10 = amount / 10;
    cout << "Number of 500 rupee notes: " << note500 << endl;
    cout << "Number of 100 rupee notes: " << note100 << endl;
    cout << "Number of 10 rupee notes: " << note10 << endl;
    return 0;
}