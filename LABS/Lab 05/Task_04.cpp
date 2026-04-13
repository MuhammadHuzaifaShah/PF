#include <iostream>
using namespace std;
/*Write a C++ program that:
• Takes an integer n from the user.
• Prints the first n Fibonacci numbers.
• Use only for loop.*/
int main()
{
    int n;
    cout << "Enter the number of Fibonacci numbers to display: ";
    cin >> n;
    int t1=0, t2=1, nextTerm=0;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++)
    {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}