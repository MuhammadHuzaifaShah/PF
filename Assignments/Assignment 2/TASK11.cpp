#include <iostream>
using namespace std;
// Muhammad Huzaifa Shah
// Roll Number: BITF25A036
// BS IT (aft)
int main()
{
    int decimal, base9 = 0, i = 1;
    cout << "Enter a decimal (Base-10) number: ";
    cin >> decimal;
    while(decimal != 0)
    {
        base9 += (decimal % 9) * i;
        decimal /= 9;
        i *= 10;
    }
    cout << "The equivalent number in Base-9 is: " << base9 << endl;
    return 0;
}