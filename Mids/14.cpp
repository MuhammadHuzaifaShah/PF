#include <iostream>
#include <fstream>
using namespace std;
 
int main()
{
    ofstream outputFile;
    outputFile.open("demo.txt");
    cout << "Now writing to the file" << endl;
    outputFile << "batch 2024" << endl;
    outputFile << "C++ programming" << endl;
    outputFile << "file handling in C++" << endl;
    outputFile.close();
    cout << "done" << endl;
   return 0;
}