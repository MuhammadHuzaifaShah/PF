#include<iostream>
using namespace std;
/*Write a C++ that computes and displays the square of each integer within the closed
interval [1,10], ensuring that the computation is performed iteratively.*/
int main(){
    int num=1;
    int square;
    while(num<=10){
        square=num*num;
        cout<<"The square of "<<num<<" is "<<square<<endl;
        num++;
    }
    return 0;
}