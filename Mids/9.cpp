#include <iostream>
using namespace std;
 
int main()
{
    int num, d1, d2, d3, original, reverse=0;
    cout << "Enter a three-digit number: ";
    cin >> num;
    original = num;
    d1 = num % 10;
    num /= 10;
    d2 = num % 10;
    num /= 10;
    d3 = num % 10;
    reverse = d1 * 100 + d2 * 10 + d3;
    cout << "Original number: " << original << endl;
    cout << "Reversed number: " << reverse << endl;
   return 0;
}