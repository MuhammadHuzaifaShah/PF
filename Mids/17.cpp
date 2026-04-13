#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
int main()
{
    ifstream inputFile;
    inputFile.open("Friends.txt");
    string name;
    cout << "Reading friends' names from the file" << endl;
    inputFile >> name;
    cout << "First friend's name is: " << name << endl;
    inputFile >> name;
    cout << "Second friend's name is: " << name << endl;
    inputFile >> name;
    cout << "Third friend's name is: " << name << endl;
    inputFile.close();
   return 0;
}