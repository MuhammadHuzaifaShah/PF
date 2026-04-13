#include <iostream>
using namespace std; 
// Muhammad Huzaifa Shah
// Roll Number: BITF25A036
// BS IT (aft)
int main()
{
    int start, end;
    cout << "Enter starting integer: ";
    cin >> start;
    cout << "Enter ending integer: ";
    cin >> end;
    if(start<end){
        for(int i=start;i<=end;i++){
            for(int j=i;j<=end;j++){
                cout << "(" << i << "," << j << ") ";
            }
            cout << endl;
        }
    }
    else if(start==end){
        cout << "(" << start << "," << end << ")" << endl;
    }
    else{
        cout <<"Invalid Number";
    }
   return 0;
}