#include<iostream>
using namespace std;
/*Write a program to calculate the Body Mass Index (BMI) of a person. 
The BMI is calculated using the following formula:
BMI = (weight in pounds * 703) /(height in inches * height in inches)
use if/else if statements to display:
"Underweight" if BMI is less than 18.5
"Optimal weight" if BMI is between 18.5 and 25
"Overweight" if BMI is greater than 25*/
int main(){
    double weight,height,bMI;
    cout<<"Enter your weight(in pounds): ";
    cin>> weight;
    cout<<"Enter your height(in inches): ";
    cin>> height;
    bMI=(weight*703)/(height*height);
    if(bMI<18.5){
        cout<<"Underweight";
    }
    else if (bMI>18.5&&bMI<25)
    {
        cout<<"Optimal weight";
    }
    else{
        cout<<"OverWeight";
    }
    return 0;
}