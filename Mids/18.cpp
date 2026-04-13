#include <iostream>
using namespace std;
// hollow square pattern
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i==n||i==1||j==1||j==n){
                 cout << "* ";
            }
            else{
                 cout << "  ";
            }
        }

        cout << endl;
    }
   return 0;
}