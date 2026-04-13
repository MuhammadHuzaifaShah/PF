#include<iostream>
using namespace std;
/*Write a program that determines whether a user qualifies for a special
 loan based on their annual income and their job stability (years at current employment).
 To qualify for the loan, the applicant must meet both of the following requirements:
1.	Income Requirement: The annual income must be at least $35,000.00.
2.	Employment Requirement: The applicant must have been employed at their current job 
for more than 5 years.*/
int main(){
    double income;
    int years;
    cout << "enter your annual income :";
    cin >> income;
    cout << "enter years at current employment :";
    cin >> years;
    if(income>=35000 && years>5){
        cout << "you qualify for the loan";
    }
    else{
        cout << "you do not qualify for the loan";
    }
    return 0;
}