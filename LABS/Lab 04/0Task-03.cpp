#include<iostream>
using namespace std;
/*Write a program to calculate the sales of East Division of a company. 
The East Division generates 58% of total sales. Total sales are 8,600,000*/
int main(){
    double sales,generateSales;
    sales=8600000;
    generateSales=sales*0.58; //0.58 indicates 58% of total sales
    cout<< "The East Division will generates $"<<generateSales<<" in sales" ;
}