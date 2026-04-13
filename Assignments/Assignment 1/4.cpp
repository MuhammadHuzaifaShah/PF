#include<iostream>
using namespace std;
int main(){
    float a,b;
    a=10;
    b=10;
    a=a+0.2;
    if(a>b){
        cout << "a is greater and b is smaller";
    }else if(b>a){
        cout << "b is greater and a is smaller";
    }else{
        cout << "Both are equal";
    }
    return 0;
}