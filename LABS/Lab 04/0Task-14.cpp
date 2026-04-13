#include<iostream>
using namespace std;
/*Write a program that asks the user to enter a starting number for a countdown (e.g., 10).
The program should count down from that number to 1, displaying each number on a new line.
After displaying the number 1, the program should print the message "Blast off!".*/
int main(){
    int i=1;
    cout<<"Enter number: ";
    cin>> i;
    while(i>=1){
        cout<<i<<endl;
        i--;
    }
    cout<<"Blast off!";
    return 0;
}