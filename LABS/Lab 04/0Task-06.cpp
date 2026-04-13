#include<iostream>
using namespace std;
/*Write a program that takes 5 integers as input from user and calculate their sum and average*/
int main(){
    int num1,num2,num3,num4,num5,sum,avg;
    cout << "Enter 1st Number: ";
    cin >> num1;
    cout << "Enter 2nd Number: ";
    cin >> num2;
    cout << "Enter 3rd Number: ";
    cin >> num3;
    cout << "Enter 4th Number: ";
    cin >> num4;
    cout << "Enter 5th Number: ";
    cin >> num5;
    sum=num1+num2+num3+num4+num5;
    avg=sum/5;
    cout << "Average of values is: "<< avg;
    return 0;
}