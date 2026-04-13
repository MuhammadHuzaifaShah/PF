#include<iostream>
using namespace std;
/*Write a program to calculate the tax of a purchase. The state tax is 4% 
and country tax is 2% of the purchase price*/
int main()
{
   double purshasePrice, stateTax, countryTax,totalTax;
   cout<<"Enter your sales: ";
   cin>> purshasePrice;
   stateTax=0.04*purshasePrice;
   countryTax=0.02*purshasePrice;
   totalTax=stateTax+countryTax;
   cout <<"Purchase price $"<<purshasePrice<<" State tax: $"<<stateTax<<" Country tax :$"<<countryTax;
   cout <<" Total Tax :$"<<totalTax;
   return 0;
} 
