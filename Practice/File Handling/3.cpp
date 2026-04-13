#include <iostream>
#include <string>
#include<fstream>
using namespace std;
 
int main()
{
    int num;
    string name;
    double cgpa;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your roll no: ";
    cin >> num;
    cout << "Enter your CGPA: ";
    cin >> cgpa;
    ofstream out("student.txt");
    if(out){
        out << "Name: " << name << endl;
        out << "Roll No: " << num << endl;
        out << "CGPA: " << cgpa << endl;
    }
    else{
        cout << "Error opening file!" << endl;
    }
    return 0;
}