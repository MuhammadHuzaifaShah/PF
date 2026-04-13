#include<iostream>
using namespace std;
/*Write a program that asks the user to enter a number of seconds. There are 60 seconds in a minute.
 If the number of seconds entered by the user is greater than or equal to 60, the program should
display the number of minutes in that many seconds. There are 3,600 seconds in an hour.
If the number of seconds entered by the user is greater than or equal to 3,600,
the program should display the number of hours in that many seconds. 
There are 86,400 seconds in a day. If the number of seconds entered by the user is greater
than or equal to 86,400, the program should display the number of days in that many seconds*/
int main(){
    int seconds;
    cout << "enter number of seconds :";
    cin >> seconds;
    if(seconds>=86400){
        cout << "number of days in that many seconds is : " << seconds/86400;
    }
    else if(seconds>=3600){
        cout << "number of hours in that many seconds is : " << seconds/3600;
    }
    else if(seconds>=60){
        cout << "number of minutes in that many seconds is : " << seconds/60;
    }
    else{
        cout << "number of seconds is less than 60";
    }
    return 0;
}