#include<iostream>
using namespace std;
/*Write a program to calculate sum of squares of two numbers*/
int main(){
    int num1,num2,totalSum;
    cout <<"Enter first number: ";
    cin >>num1;
    cout <<"Enter Second number: ";
    cin >>num2;
    totalSum=num1*num1+num2*num2;
    cout <<"The sum of squar of two numbers is:"<<totalSum<<endl;
    return 0;
}