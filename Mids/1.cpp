#include <iostream>
using namespace std;
 
int main()
{
    int decimalNum, binNum;
    cout << "Enter a decimal number: ";
    cin >> decimalNum;
    binNum = 0;
    int i = 1;
    while (decimalNum != 0) {
        int rem = decimalNum % 2;
        binNum += rem * i;
        decimalNum /= 2;
        i *= 10;
    }
    cout << "Binary number: " << binNum << endl;
   return 0;
}