#include <iostream>
using namespace std;
/*Q10. Pattern logic (pseudocode only)
*
**
***
****
***** 
using while loop*/
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin >> n;
    int i = 1;
    while(i <= n) {
        int j = 1;
        while(j <= i) {
            cout << "* ";
            j++;
        }
        cout<<endl;
        i++;
    }
   return 0;
}