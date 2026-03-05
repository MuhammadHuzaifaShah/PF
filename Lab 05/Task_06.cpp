#include <iostream>
using namespace std;
/*Write a C++ program that:
1. Takes an integer n (total number of snacks) from the user.
2. Calculates the net score using the alternate series:
1 - 2 + 3 - 4 + 5 - 6 ... N*/ 
int main()
{
    int n;
    cout << "Enter the number of snacks: ";
    cin >> n;
    int netScore = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            netScore -= i;
        }
        else
        {
            netScore += i;
        }
    }
    cout << "Net score: " << netScore << endl;
   return 0;
}