#include<iostream>
using namespace std;
//Print Even and Odd Numbers from 1 to N
int main() {
    int n;
    cout << "Enter a number N: ";
    cin >> n;

    cout << "Even numbers from 1 to " << n << ": ";
    for (int i = 2; i <= n; i += 2) {
        cout << i << endl;
    }
    cout << endl;

    cout << "Odd numbers from 1 to " << n << ": ";
    for (int i = 1; i <= n; i += 2) {
        cout << i << endl;
    }
    cout << endl;

    return 0;
}