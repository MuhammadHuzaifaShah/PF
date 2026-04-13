#include<iostream>
using namespace std;
/*Write a program to display the following pattern: using loop
*
**
***
****
***** */
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