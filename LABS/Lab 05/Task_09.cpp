#include <iostream>
using namespace std;
/*Write a program that:
1. Takes a positive integer N from the user.
2. Prints a pyramid of stars using a for loop:*/
int main()
{
    int n;
    cout << "Enter the number of rows for the pyramid: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

   return 0;
}