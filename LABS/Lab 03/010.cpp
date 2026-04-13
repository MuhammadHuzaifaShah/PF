#include<iostream>
using namespace std;
/*Write an algorithm that accepts an integer from the user and determines whether the
number is a palindrome (i.e., it reads the same forwards and backwards)*/
int main(){
    int num, original,reminder,reverse=0;
    cout << "Enter number:";
    cin >>  num;
    original=num;
    while(num!=0){
        reminder=num%10;
        reverse=reverse*10+reminder;
        num=num/10;
    }
    if(reverse==original){
        cout << "Number is a palindrome";
    }else{
        cout << "Number is not a palindrome";
    }
    return 0;
}