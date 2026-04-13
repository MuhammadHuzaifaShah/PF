#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("Task4.txt");
    ofstream evenFile("even.txt");
    ofstream oddFile("odd.txt");

    int num;

    if (!inFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "Reading numbers from file..." << endl;
    cout << endl;

    while (inFile >> num) {
        if (num % 2 == 0) {
            evenFile << num << " ";
        } else {
            oddFile << num << " ";
        }
    }

    inFile.close();
    evenFile.close();
    oddFile.close();

    // cout << "Even numbers written to even.txt" << endl;
    // cout << "Odd numbers written to odd.txt" << endl;

    // ifstream readEven("even.txt");
    // cout << "even.txt:" << endl;
    // while (readEven >> num) {
    //     cout << num << " ";
    // }
    // readEven.close();

    // cout << endl;

    // ifstream readOdd("odd.txt");
    // cout << "odd.txt:" << endl;
    // while (readOdd >> num) {
    //     cout << num << " ";
    // }
    // readOdd.close();

    return 0;
}