#include<iostream>
using namespace std;
/*Write a program that takes 2 integers tableNo and limit as input from user.
Then display the table of the tableNo up to limit starting from 1.*/
int main(){
    int num1,num2;
    cout<<"Enter number: ";
    cin>> num1;
    cout<<"Enter range: ";
    cin>> num2;
    for(int i=1;i<=num2;i++){
        cout<<num1<<" * "<<i<<" = "<<num1*i<<endl;
    }
    return 0;

}