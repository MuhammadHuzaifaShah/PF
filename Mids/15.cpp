#include <iostream>
#include <fstream>
using namespace std;
 
int main()
{
    ofstream outputFile;
    int num1, num2, num3;
    outputFile.open("Numbers.txt");
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    outputFile << num1 << endl;
    outputFile << num2 << endl;
    outputFile << num3 << endl;
    outputFile.close();
    cout << "Numbers are written to the file" << endl;
    cout << "done" << endl;
   return 0;
}