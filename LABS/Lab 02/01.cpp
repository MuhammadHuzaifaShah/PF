#include<iostream>
using namespace std;
/* 1. check pin entered is correct or not 
2. if pin is correct ,check withdrawal amount is less than or equal to  account balance
. if yes "withdrawal successful"
. if no "insufficient balance"
3.if pin is incorrect, display "incorrect pin"*/
int main(){
    int pin,withdrawal_amount;
    float account_balance=10000;
    cout<<"Enter your pin: ";
    cin>>pin;
    if(pin==1234){
        cout<<"Enter withdrawal amount: ";
        cin>>withdrawal_amount;
        if(withdrawal_amount<=account_balance){
            cout<<"Withdrawal successful";
        }
        else{
            cout<<"Insufficient balance";
        }
    }
    else{
        cout<<"Incorrect pin";
    }
}
