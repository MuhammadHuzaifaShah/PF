#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    a=20;
    b=a/6; //b becomes 3 because of integer division
    c=a%6; //c becomes 2 as it is the remainder
    a=b+c; //a becomes 5
    b=a*2; //b becomes 10
    c=b/a; //c becomes 2
    a=a+c; //a becomes 7
    b=a%4; //b becomes 3
    cout<< "The value of a is "<<a<<endl;
    cout<< "The value of b is "<<b<<endl;
    cout<< "The value of c is "<<c<<endl;
    return 0;
}