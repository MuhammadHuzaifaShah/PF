#include<iostream>
using namespace std;
/*Write a program that determines if a year is a leap year or not.
The logic isn't just year % 4 == 0. To be a leap year, the year must be divisible by 4.
However, if the year is also divisible by 100, it is not a leap year, 
unless it is also divisible by 400.*/
int main(){
    int year;
    cout<<"Enter year: ";
    cin>>year;
    if((year%4==0&&year%100!=0)||(year%400==0)){
        cout<<"this is a leap year";
    }
    else{
        cout<<"not a leap year";
    }
    return 0;
}