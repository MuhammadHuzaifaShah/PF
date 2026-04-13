#include <iostream>
using namespace std;
int main(){
    int num, sum=0, digit=0;
    cout << "Enter 4 digit number: ";
    cin >> num;
    cout << "digits are : ";
    while(num>0){
        digit =num%10;
        sum=sum+digit;
        cout << digit << " ";
        num=num/10;
    }
    cout << endl;
    cout << "sum of digits are : " << sum;
    return 0;
}