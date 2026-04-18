#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("Task1.txt");

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    int num, max;

    cout << "Reading numbers from file..." << endl;

    file >> max;
    cout << "Numbers: " << max << " ";

    while (file >> num) {
        cout << num << " ";
        if (num > max) {
            max = num;
        }
    }

    cout << endl;
    cout << "Largest number is: " << max << endl;

    file.close();
    return 0;
}