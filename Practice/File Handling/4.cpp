#include <iostream>
#include <string>
#include<fstream>
using namespace std;
 
int main()
{
    // int num;
    // string name;
    // double cgpa;
    ifstream fin("student.txt");
    if(fin){
        string line;
        while(getline(fin, line)){
            cout << line << endl;
        }
    }
    else{
        cout << "Error opening file!" << endl;
    }
   return 0;
}