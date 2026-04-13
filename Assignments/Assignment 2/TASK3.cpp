#include <iostream>
using namespace std;
// Muhammad Huzaifa Shah
// Roll Number: BITF25A036
// BS IT (aft) 
int main()
{
    int a,d,n;
    cout << "Enter first number: ";
    cin >> a;
    cout <<"Enter difference: ";
    cin >> d;
    cout <<"Enter Number of terms: ";
    cin >> n;
    cout <<"Sequence: ";
    for(int i=0;i<n;i++){
        cout << a+i*d << " ";
    }
   return 0;
}