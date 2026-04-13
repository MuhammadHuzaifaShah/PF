#include<iostream>
using namespace std;
int main(){
    float nom, denom, result;
    cout << "enter the value of nominator :";
    cin >> nom;
    cout << "enter the value of denominator :";
    cin >> denom;
    if(denom!=0){
        result=nom/denom;
        cout << "the result is :" << result;
    }else{
        cout << "devision by 0 is not possible";
    }
    return 0;
}   