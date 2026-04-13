#include <iostream>
using namespace std; 
/*Write a program that:
1. Takes a positive integer N from the user.
2. Prints all numbers between 1 and N that are prime.
3. Use loops and if-else only.*/
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Prime numbers between 1 and " << n << " are: ";

    for (int i = 2; i <= n; i++)
    {
        int isPrime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            cout << i << " ";
        }
    }
    cout << endl;
   return 0;
}