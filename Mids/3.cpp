#include <iostream>
using namespace std;

int main()
{
    int i=1;
    int n;
    cout<<"Enter a upperlimit: ";
    cin >> n;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"Sum of first "<<n<<" natural numbers is: "<<sum<<endl;
   return 0;
}