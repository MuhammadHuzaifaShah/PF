#include<iostream>
using namespace std;
int main(){
    int sales;
    cout << "enter total sales :";
    cin >> sales;
    if(sales>50000){
        sales=sales+(sales*0.25)+250;
    }
    cout << "total sales is : " << sales;
    return 0;
}