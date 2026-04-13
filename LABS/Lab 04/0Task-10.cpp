#include<iostream>
using namespace std;
/*Write a program that asks the user to enter a number of seconds.
1.If the number of seconds is greater than or equal to 60, calculate and display the number of 
minutes and remaining seconds.
2.If the number of seconds is greater than or equal to 3,600, calculate and display
 the number of hours, minutes, and seconds.
3.If the number of seconds is greater than or equal to 86,400, calculate and display
 the number of days, hours, minutes, and seconds.*/
int main(){
    int seconds;
    cout << "enter number of seconds :";
    cin >> seconds;
    if(seconds>=86400){
        cout << "number of days in that many seconds is : " << seconds/86400;
        cout << "\nnumber of hours in remaining seconds is : " << (seconds%86400)/3600;
        cout << "\nnumber of minutes in remaining seconds is : " << ((seconds%86400)%3600)/60;
        cout << "\nnumber of seconds in remaining seconds is : " << ((seconds%86400)%3600)%60;
    }
    else if(seconds>=3600){
        cout << "number of hours in that many seconds is : " << seconds/3600;
        cout << "\nnumber of minutes in remaining seconds is : " << (seconds%3600)/60;
        cout << "\nnumber of seconds in remaining seconds is : " << (seconds%3600)%60;
    }
    else if(seconds>=60){
        cout << "number of minutes in that many seconds is : " << seconds/60;
        cout << "\nnumber of seconds in remaining seconds is : " << seconds%60;
    }
    else{
        cout << "number of seconds is less than 60";
    }
    return 0;
}