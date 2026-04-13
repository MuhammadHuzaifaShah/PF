#include<iostream>
using namespace std;
int main(){
    int sub1, sub2;
    float average;
    cout << "Enter marks for Subject 1: ";
    cin >> sub1;
    cout << "Enter marks for Subject 2: ";
    cin >> sub2;
    average = (sub1 + sub2) / 2.0;
    cout << "Average Marks: " << average << endl;
    return 0;
}