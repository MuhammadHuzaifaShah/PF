#include<iostream>
using namespace std;
/*Write a program that asks the user for a positive integer value. The program should 
use a loop to compute the sum of all integers from 1 up to the number entered.
For example, if the user enters 50, the loop will find the sum of $1 + 2 + 3 + ... + 50$.
Constraint: If the user enters a negative number, display an error message and
do not calculate the sum. (Strictly use loops).*/
int main(){
    int num,sum=0;
    cout<<"Enter number: ";
    cin>> num;
    if(num<0){
        cout<<"Error! Please enter a positive number.";
    }
    else{
        int i=1;
        while(i<=num){
            sum=sum+i;
            i++;
        }
        cout<<"The sum of all integers from 1 to "<<num<<" is : "<<sum;
    }
    return 0;
}