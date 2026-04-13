#include<iostream>
using namespace std;
/*Write an algorithm that first accepts an integer N from the user, representing the total count
of numbers to be entered. Then, read N integers and determine the smallest value among
them. Finally, display this value.
Ensure your algorithm correctly handles any sequence of integers, including negative
numbers and duplicates.*/
int main(){
    int n;
    cout<<"Enter the total count of numbers: ";
    cin>>n;
    if(n<=0){
        cout<<"Please enter a positive integer for the count."<<endl;
        return 1;
    }
    int smallest;
    cout<<"Enter "<<n<<" integers: ";
    cin>>smallest; // Initialize smallest with the first input
    for(int i=1; i<n; i++){
        int num;
        cin>>num;
        if(num<smallest){
            smallest=num;
        }
    }
    cout<<"The smallest value entered is: "<<smallest<<endl;
    return 0;
}