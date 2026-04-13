#include<iostream>
using namespace std;
/*Write an algorithm that reads a non-negative integer from the user and calculates its
factorial. Ensure that your algorithm correctly handles any valid input, including 0 (whose
factorial is 1).*/
int main(){
    int num;
    int factorial=1;
    int i=1;
    cout<<"Enter a non-negative integer: ";
    cin>>num;
    if(num<0){
        cout<<"Factorial is not defined for negative numbers."<<endl;
        return 1;
    }
    while(i<=num){
        factorial*=i;
        i++;
    }
    cout<<"The factorial of "<<num<<" is "<<factorial<<endl;
    return 0;
}