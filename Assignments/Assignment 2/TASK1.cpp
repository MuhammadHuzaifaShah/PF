#include <iostream>
using namespace std;
// Muhammad Huzaifa Shah
// Roll Number: BITF25A036
// BS IT (aft)
int main()
{
    int n;
    int sum = 0;

    cout << "Enter a positive integer n: ";
    cin >> n;

    cout << "Sum of squares (";

    for (int i = 1; i < n; i++)
    {
        cout << i << "²";

        if (i < n - 1){
            cout << " + ";
        }
        sum = sum + i * i;
    }

    cout << ") = " << sum;

    return 0;
}