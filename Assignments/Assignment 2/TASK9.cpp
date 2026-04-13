#include <iostream>
using namespace std;
// Muhammad Huzaifa Shah
// Roll Number: BITF25A036
// BS IT (aft)
int main()
{
    int digit, base7Number = 0, power = 1;
    cout << "Enter a Base-7 digit: ";
    cin >> digit;
    while (digit != -1)
    {
        base7Number += digit * power;
        power *= 7;
        cout << "Enter a Base-7 digit: ";
        cin >> digit;
    }
    cout << "The equivalent number in Base-10 is: " << base7Number << endl;
   return 0;
}