#include <iostream>
using namespace std;
// Muhammad Huzaifa Shah
// Roll Number: BITF25A036
// BS IT (aft) 
int main()
{
    int n,largest,second_Largest;
    cout << "Enter the number of inputs (>=2): ";
    cin >> n;
    while (n<2)
    {
        cout << "ERROR: Invalid input!!" << endl;
        cout << "Enter the number of inputs again (>=2): ";
        cin >> n;
    }
    for(int i=1;i<=n;i++){
        int num;
        cout << "Enter number "<< i<< ": ";
        cin >> num;
        if(i==1){
            largest=num;
            second_Largest=num;
        }
        else if(num>largest){
            second_Largest=largest;
            largest=num;
        }
        else if(num>second_Largest && num!=largest){
            second_Largest=num;
        }
    }
    cout << "Largest number is: " << largest << endl;
    cout << "Second largest number is: " << second_Largest << endl;
   return 0;
}