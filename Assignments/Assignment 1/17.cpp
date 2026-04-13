#include<iostream>
using namespace std;
/*Write a program that ask user which type of headphone he/she wants to buy . display the correct price of the selected type of headphone.
Number	Headphone Type	Price (Rate)
1.	Noise Canceling	249.00
2.	Wireless	199.00
3.	Wired Budget	49.00
*/
int main(){
    int type;
    cout << "which type of headphone you want to buy (1,2,3) :";
    cin >> type;
    switch(type){
        case 1:
            cout << "Noise Canceling headphone price is : 249.00";
            break;
        case 2:
            cout << "Wireless headphone price is : 199.00";
            break;
        case 3:
            cout << "Wired Budget headphone price is : 49.00";
            break;
        default:
            cout << "invalid headphone type";
    }
    return 0;
}