#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n, marks, sum = 0;

    cout << "Enter number of students: ";
    cin >> n;

    ofstream outFile("Task2.txt");

    cout << "Enter marks:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << "Student " << i << ": ";
        cin >> marks;
        outFile << marks << " ";
    }

    outFile.close();
    cout << "Data stored in file..." << endl;

    ifstream inFile("Task2.txt");

    cout << "Reading from file..." << endl;
    cout << "Marks: ";

    while (inFile >> marks) {
        cout << marks << " ";
        sum += marks;
    }

    inFile.close();

    float average = sum / n;

    cout << endl;
    cout << "Average Marks: " << average << endl;

    return 0;
}