#include <iostream>
using namespace std;
// Muhammad Huzaifa Shah
// Roll Number: BITF25A036
// BS IT (aft)
int main()
{
    int height, width;
    cout << "Enter height: ";
    cin >> height;
    while (height<3 || height%2==0)
    {
        cout << "Invalid input enter again: ";
        cout << "Enter height: ";
        cin >> height;
    }
    cout << "Enter width: ";
    cin >> width;
    while (width<5 || width%2==0)
    {
        cout << "Invalid input enter again: ";
        cout << "Enter width: ";
        cin >> width;
    }
    for(int i=1;i<=height;i++){
        for(int j=1;j<=width;j++){
            if(i%2!=0){
                cout << "+";
            }
            else{
                if(j%2!=0){
                    cout << "+";
                }
                else{
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
   return 0;
}