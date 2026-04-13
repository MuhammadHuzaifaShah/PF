#include<iostream>
using namespace std;
/*Question 3: Write a pseudocode algorithm that:
Takes a 4-digit number
Displays digits in the following order:
Order is not simple reverse
Use only / and %
SAMPLE:
Input : 7531
Output : 1 - 7 - 3 - 5*/
int main(){
    int number, digit1, digit2, digit3, digit4;
    cout << "Enter a 4-digit number: ";
    cin >> number;

    digit1 = number % 10;          // Extract the last digit
    digit2 = (number / 10) % 10;   // Extract the third digit
    digit3 = (number / 100) % 10;  // Extract the second digit
    digit4 = (number / 1000) % 10; // Extract the first digit

    cout << "Reordered digits: " << digit1 << " - " << digit4 << " - " << digit3 << " - " << digit2 << endl;

    return 0;
}


