#include<iostream>
using namespace std;
/*Let's see if your birthday is a special day!

The date June 10, 1960, is special because when we write it in the following format,
the month times the day equals the year: 6/10/60. Write a program that asks the user
to enter a numeric month, a day, and a two-digit year. The program should multiply
the month by the day. If the result equals the year, display a message
saying the date is magic. Otherwise, display a message saying the date is not magic.*/
int main(){
    int month,day,year;
    cout<<"Enter month: ";
    cin>> month;
    cout<<"Enter day: ";
    cin>> day;
    cout<<"Enter year ( two digits): ";
    cin>> year;
    if(month*day==year){
        cout<<"Date is magic";
    }
    else{
        cout<<"Date is not Magic";
    }
    return 0;
}
