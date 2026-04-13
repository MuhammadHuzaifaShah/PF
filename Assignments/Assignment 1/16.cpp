#include<iostream>
using namespace std;
/*:  A bank charges $10 per month plus the following check fees for a commercial
 checking account: $.10 each for fewer than 20 checks $.08 each for 20-39 checks $.06 each
  for 40-59 checks $.04 each for 60 or more checks The bank also charges an extra $15 if 
  the balance of the account falls below $400 (before any check fees are applied).
   Write a program that asks for the beginning balance and the number of checks written. 
   Compute and display the bank's service fees for the month.*/
int main(){
    double balance,fees;
    int checks;
    cout << "enter beginning balance :";
    cin >> balance;
    cout << "enter number of checks written :";
    cin >> checks;
    fees=10;
    if(checks<20){
        fees+=checks*0.10;
    }
    else if(checks>=20 && checks<40){
        fees+=checks*0.08;
    }
    else if(checks>=40 && checks<60){
        fees+=checks*0.06;
    }
    else{
        fees+=checks*0.04;
    }
    if(balance<400){
        fees+=15;
    }
    cout << "bank's service fees for the month is : " << fees;
    return 0;
}