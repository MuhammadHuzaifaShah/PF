#include <iostream>
using namespace std;
/*Write a C++ program that:
1. Takes an integer n as input from the user.
2. Calculates the total number of distinct ways to reach the top.
3. Displays the total number of possible ways
Each time you can either:
• climb 1 step, or
• climb 2 steps*/
int main()
{
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;

    int ways = 0;
    int prev1 = 1;
    int prev2 = 1;
    if(n == 0 || n == 1)
    {
        cout << "Total distinct ways: 1" << endl;
        return 0;
    }

    for (int i = 2; i <= n; i++)
    {
        ways = prev1 + prev2;
        prev2 = prev1;
        prev1 = ways;
    }

    cout << "Total distinct ways: " << ways << endl;
   return 0;
}