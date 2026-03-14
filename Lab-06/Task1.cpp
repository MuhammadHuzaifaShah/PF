#include <iostream>
using namespace std;
/* Write a program that generates a customized multiplication table (matrix) based on a range provided by
the user. Instead of starting from 1, the table starts and ends at specific integers, creating a perfect
square grid of products.*/
int main()
{
    int start, end;

    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    cout << endl;

    cout << "    ";
    for (int i = start; i <= end; i++) {
        cout << i << "   ";
    }
    cout << endl;

    cout << "--------------------" << endl;

    for (int i = start; i <= end; i++) {
        cout << i << " | ";
        for (int j = start; j <= end; j++) {
            int product = i * j;

            if (product < 10)
                cout << product << "   ";
            else if (product < 100)
                cout << product << "  ";
            else
                cout << product << " ";
        }
        cout << endl;
    }
   return 0;
}