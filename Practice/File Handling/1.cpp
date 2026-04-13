#include <iostream>
#include <string>
using namespace std;

int main() {
    int rollno;
    string name;
    string address;

    cout << "Enter your roll no: ";
    cin >> rollno;
    cin.ignore();

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your address: ";
    getline(cin, address);

    cout << "Entered data is...\n";
    cout << rollno << endl;
    cout << name << endl;
    cout << address << endl;

    return 0;
}