#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout << "enter first number";
    cin >> x;
    cout << "enter second number";
    cin >> y;
    if(x>y){
        cout << "first number is greater than second number";
    }else if(x<y){
        cout << "second number is greater than first number";
    }else{
        cout << "both numbers are equal";
    }
    return 0;
}