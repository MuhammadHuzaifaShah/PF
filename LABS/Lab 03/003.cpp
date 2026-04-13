#include<iostream>
using namespace std;
/*Write a C++ program that identifies and displays all integers within the inclusive range of 1 to
50 that are exactly divisible by 5.*/
int main(){
    int num=1;
    while(num<=50){
        if(num%5==0){
            cout<<num<<" ";
        }
        num++;
    }
    return 0;
}