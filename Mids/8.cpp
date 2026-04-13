#include <iostream>
using namespace std;
 
int main()
{
    int num1, num2, swap;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    swap = num1;
    num1 = num2;
    num2 = swap;
    cout << "After swapping: " << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;
   return 0;
}