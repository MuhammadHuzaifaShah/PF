#include <iostream>
#include <fstream>
using namespace std;

int main() {
   
ifstream inFile("Task3.txt");
ofstream outFile("Task3output.txt");
if (!inFile) {
    cout << "Error opening input file!" << endl;
    return 1;
}
if (!outFile) {
    cout << "Error opening output file!" << endl;
    return 1;
}
string line;
while (getline(inFile, line)) {
    outFile << line << endl;
}
cout << "Data copied successfully!" << endl;
cout << "Contents of output.txt:" << endl;
ifstream outFileRead("Task3output.txt");
if (!outFileRead) {
    cout << "Error opening output file for reading!" << endl;
    return 1;
}
while (getline(outFileRead, line)) {
    cout << line << endl;
}
    return 0;
}