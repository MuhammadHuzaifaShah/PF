#include<iostream>
using namespace std;
/*Using the following chart, write an if/else if statement that assigns .10, .15, or .20
to commission, depending on the value in sales entered by the user.
Sales Commission Rate
Up to $10,000 		10%
$10,000 to $15,000 	15%
Over $15,000 		20%
*/
int main(){
    double sales,commission;
    cout << "enter total sales :";
    cin >> sales;
    if(sales<=10000){
        commission=0.10;
    }
    else if(sales>10000 && sales<=15000){
        commission=0.15;
    }
    else{
        commission=0.20;
    }
    cout << "commission is : " << commission*sales;
    return 0;
}