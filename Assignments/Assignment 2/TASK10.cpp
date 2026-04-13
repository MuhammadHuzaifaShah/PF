#include <iostream>
using namespace std;
// Muhammad Huzaifa Shah
// Roll Number: BITF25A036
// BS IT (aft)
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    if(n>0){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                cout <<"  ";
            }
            for(int j=i;j>=1;j--){
                cout << j <<" ";
            }
            for(int j=2;j<=i;j++){
                cout << j <<" ";
            }
            cout << endl;
        }
    }
    return 0;
}