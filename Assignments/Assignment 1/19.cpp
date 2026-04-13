#include<iostream>
using namespace std;
/*: A mobile phone service provider has three different data plans for its customers: 
Package 1: For $39.99 per month, 4 gigabytes are provided. Additional data costs $10 per gigabyte. 
Package 2: For $59.99 per month, 8 gigabytes are provided. Additional data costs $5 per gigabyte.
 Package 3: For $69.99 per month, unlimited data is provided. Write a program that calculates 
 a customer's monthly bill. It should ask which package the customer has purchased and how many gigabytes
  were used. It should then display the total amount due.*/
int main(){
    int package;
    double data, bill;
    cout << "which package you have purchased (1,2,3) :";
    cin >> package;
    cout << "enter how many gigabytes were used :";
    cin >> data;
    switch(package){
        case 1:
            bill=39.99;
            if(data>4){
                bill+=(data-4)*10;
            }
            break;
        case 2:
            bill=59.99;
            if(data>8){
                bill+=(data-8)*5;
            }
            break;
        case 3:
            bill=69.99;
            break;
        default:
            cout << "invalid package number";
            return 0;
    }
    cout << "total amount due is : " << bill;
    return 0;
}