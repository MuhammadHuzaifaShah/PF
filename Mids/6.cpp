#include <iostream>
using namespace std;
 
int main()
{
    int num, largest;
    for(int i=0;i<5;i++){
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        if (i==0) {
           largest=num;
        }
        if(num>largest){
            largest=num;
        }
    }
    cout << "The largest number is: " << largest << endl;
   return 0;
}