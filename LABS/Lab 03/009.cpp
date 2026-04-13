#include<iostream>
using namespace std;
/*Write an algorithm to print a right-aligned triangle of asterisks (*) with 5 rows as shown
below. Each row should have one more * than the previous row. Use loops to print the
pattern.*/
int main(){
    int i,j;
    i=1;
    while(i<=5){
        j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}