#include <iostream>
using namespace std;
 
int main()
{
    int rows;
    cout <<"Enter number of rows: ";
    cin >> rows;
    if(rows<3||rows>10){
        cout << "Invalid input. Number of rows must be between 3 and 10." << endl;
    }
    else{
        for(int i=0;i<rows;i++){
            for(int j=0;j<=i;j++){
                cout << "* ";
            }
            cout << endl;
        }
    }
   return 0;
}