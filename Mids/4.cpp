#include <iostream>
using namespace std;
 
int main()
{
    int upperLimit;
    int number,evenSum=0,oddSum=0;
    cout<<"Enter a upper limit: ";
    cin >> upperLimit;
    for(int i=1;i<=upperLimit;i++){
        cout<<"Enter a number: ";
        cin >> number;
        if(number%2==0){
            evenSum+=number;
        }
        else{
            oddSum+=number;
        }
    }
    cout<<"Sum of even numbers is: "<<evenSum<<endl;
    cout<<"Sum of odd numbers is: "<<oddSum<<endl;
   return 0;
}