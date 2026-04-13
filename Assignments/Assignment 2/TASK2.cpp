#include <iostream>
using namespace std;
// Muhammad Huzaifa Shah
// Roll Number: BITF25A036
// BS IT (aft) 
int main()
{
    int limit;
    cout << "Enter limit :";
    cin >> limit;
    int a=0,b=1,next;
    cout <<"Fibonacci seriers upto "<<limit<<" is: ";
    while(a<=limit){
    cout << a << " ";
        next=a+b;
        a=b;
        b=next;
    }
   return 0;
}