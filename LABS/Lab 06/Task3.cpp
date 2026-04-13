#include <iostream>
using namespace std;
/*Write a C++ program that asks the user for an upper limit N, then for every number from 1 to N, finds
and displays all of its factors*/
int main() {
    int limit;

    cout << "Enter the upper limit: ";
    cin >> limit;

    for (int num = 1; num <= limit; num++) {
        cout << "Factors of " << num << ": ";

        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                cout << i << " ";
            }
        }

        cout << endl;
    }

    return 0;
}