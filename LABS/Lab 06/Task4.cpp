#include <iostream>
using namespace std;
/*Write a program that asks for a number of rows and prints a triangle where each row contains the
Fibonacci sequence up to that point.*/
int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
       int a = 0;
       int b = 1;
        for (int j = 1; j <= i; j++){
            cout << a << " ";
            int next = a + b;
            a = b;
            b = next;
        }

        cout << endl;
    }

    return 0;
}