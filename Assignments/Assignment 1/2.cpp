#include <iostream>
using namespace std;
int main(){
    int temp;
    cout << "enter the value of temp :";
    cin >> temp;
    if((temp>-50)&&(temp<50)){
        cout << "number is valid";
    }else{
        cout << "number is invalid";
    }
    return 0;
}