#include <iostream>
using namespace std;
/*Write a program that asks the user to enter a 4-digit PIN and checks whether it is a Valid Zig-Zag PIN.
Conditions:
Digits must follow the pattern: d₁ < d₂ > d₃ < d₄.
The PIN must not contain 0.*/
int main()
{
    int pin;
    cout << "Enter a 4-digit PIN: ";
    cin >> pin;
    if (pin < 1000 || pin > 9999)
    {
        cout << "INVALID PIN: PIN must be a 4-digit number." << endl;
        return 0;
    }
    int d1 = pin / 1000;
    int d2 = (pin / 100) % 10;
    int d3 = (pin / 10) % 10;
    int d4 = pin % 10;
    if (d1 == 0 || d2 == 0 || d3 == 0 || d4 == 0)
    {
        cout << "INVALID PIN: PIN cannot contain the digit 0." << endl;
        return 0;
    }
    if (!(d1 < d2 && d2 > d3 && d3 < d4))
    {
        cout << "INVALID PIN: PIN does not follow the Zig-Zag pattern." << endl;
        return 0;
    }
    cout << "Success: " << pin << " follows the Zig-Zag pattern." << endl;
    cout << "RESULT: VALID PIN" << endl;
    return 0;
}