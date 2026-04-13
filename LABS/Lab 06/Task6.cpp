#include <iostream>
using namespace std;
/*Write a program that scans all integers from 1 up to a limit N entered by the user. Identify and print
every Armstrong Number found in that range.*/
int main() {
    int N;
    int count = 0;

    cout << "Enter upper limit N: ";
    cin >> N;

    cout << "Scanning from 1 to " << N << "..." <<endl;
    cout << "--------------------------------------\n";

    for(int i = 1; i <= N; i++) {
        int num = i;
        int digits = 0;
        int sum = 0;
        int temp = num;

        while(temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        while(temp > 0) {
            int digit = temp % 10;
            int power = 1;

            for(int j = 0; j < digits; j++) {
                power *= digit;
            }

            sum += power;
            temp /= 10;
        }

        
        if(sum == num) {
            cout << "[FOUND] " << num << " (" << digits << "-digit)" << endl;
            count++;
        }
    }

    cout << "--------------------------------------\n";
    cout << "Total Armstrong Numbers Found: " << count << endl;

    return 0;
}