#include <iostream>
/*Write a C++ program that:
• Takes an integer n (number of days) from the user.
• Calculates the total number of pages read using the series:
1 + 1/2 + 1/3 + 1/4 + ... + 1/n
• Display the final total (use floating-point variables).
• Use a for loop*/
using namespace std;

int main()
{
    int n;
    double total = 0;
    cout << "Enter the number of days: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        total += 1.0 / i;
    }
    cout << "Total pages read: " << total << endl;
   return 0;
}