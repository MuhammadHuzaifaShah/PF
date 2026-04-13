#include <iostream>
using namespace std;
// Muhammad Huzaifa Shah
// Roll Number: BITF25A036
// BS IT (aft)
int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            cout << i*j << " ";
        }
        cout << endl;
    }
   return 0;
}