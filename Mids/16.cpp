#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
int main()
{
    ofstream outputFile;
    outputFile.open("Friends.txt");
    string name1, name2, name3;
    cout << "Enter first friend's name: ";
    getline(cin, name1);
    cout << "Enter second friend's name: ";
    getline(cin, name2);
    cout << "Enter third friend's name: ";
    getline(cin, name3);
    outputFile << name1 << endl;
    outputFile << name2 << endl;
    outputFile << name3 << endl;
    outputFile.close();
    cout << "Friends' names are written to the file" << endl;
   return 0;
}