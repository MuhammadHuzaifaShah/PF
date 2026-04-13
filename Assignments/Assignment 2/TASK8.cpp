#include <iostream>
using namespace std;
// Muhammad Huzaifa Shah
// Roll Number: BITF25A036
// BS IT (aft)
int main()
{
    long long binary, decimal = 0, base = 1, remainder;
    cout << "Input a binary number: ";
    cin >> binary;
    while (binary > 0)
    {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }
    cout << "The equivalent decimal number is: " << decimal << endl;
   return 0;
}