#include <iostream>
using namespace std;
/*        1
        2 3 2
      3 4 5 4 3
    4 5 6 7 6 5 4
  5 6 7 8 9 8 7 6 5
  */
int main()
{
    for(int i=1;i<=5;i++){
        for(int j=0;j<5-i;j++){
            cout<<"  ";
        }
        for(int k=0;k<i;k++){
            cout<<i+k<<" ";
        }
        for(int l=0;l<i-1;l++){
            cout<<2*i-l-2<<" ";
        }
        cout<<endl;
    }
   return 0;
}