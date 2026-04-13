#include <iostream>
using namespace std;
 
int main()
{
    int startingNum,rows;
    cout << "Enter starting number: ";
    cin >> startingNum;
    cout <<"Enter number of rows: ";
    cin >> rows;
    for(int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
            cout << startingNum << " ";
            startingNum +=3;
        }
        cout << endl;
    }
   return 0;
}