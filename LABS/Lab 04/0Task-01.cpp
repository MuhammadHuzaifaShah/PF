#include<iostream>
using namespace std;
/*Write a program to display the following when user enters 1:
Hi I’m {Your_name} doing my first lab of Programming fundamentals.
If user enters 2 display the following:
Hi I’m TA for PF this is also my first lab but as a TA.
Else
Awww ! Ap kon?*/
int main(){
    int num;
    cout <<"Please Enter number: ";
    cin >> num;
    if(num==1){
        cout<< "Hi I'm Huzaifa doing my first my first lab of Programming fundamental";
    }
    else if (num==2)
    {
        cout<<"Hi I'm TA for PF this also my first lab but as TA.";
    }
    else{
        cout <<"Awww ! Ap kon";
    }
    return 0;
}