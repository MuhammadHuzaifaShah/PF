#include<iostream>
using namespace std;
/*Write an algorithm that accepts an integer from the user and counts the total number of
odd digits present in that number.
Ensure your solution works correctly for:
positive numbers
negative numbers
numbers with repeated digits*/
int main(){
    int num;
    cout<<"Enter an integer: ";
    cin>>num;
    int oddDigitCount=0;
    // num=abs(num); // Handle negative numbers
    while(num>0){
        int digit=num%10; // Extract the last digit
        if(digit%2!=0){ // Check if the digit is odd
            oddDigitCount++;
        }
        num=num/10; // Remove the last digit
    }
    cout<<"Total number of odd digits: "<<oddDigitCount<<endl;
    return 0;
}