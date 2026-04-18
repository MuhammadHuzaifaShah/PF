#include <iostream>
using namespace std;
/*Write a C++ program that:
1. Asks the user to enter a positive number.
2. Repeatedly halve the number (divide by 2) if it is even, or subtract 1 if it is odd.
3. Print each number in the process.
4. Stop when the number becomes 0.
5. Count and display the total steps taken.
Use do-while loop and if-else only..*/
int main()
{
    int number, steps = 0;
    cout << "Enter a positive number: ";
    cin >> number;

    cout << "Sequence: " << number << " ";

    do
    {
        if (number % 2 == 0)
        {
            number /= 2;
        }
        else
        {
            number--;
        }
        cout << number << " ";
        steps++;
    } while (number > 0);
    cout << endl;
    cout << "Total steps: " << steps << endl;

    return 0;
}