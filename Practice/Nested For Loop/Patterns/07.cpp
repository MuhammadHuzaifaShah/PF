#include <iostream>
using namespace std;
// hollow diamond pattern
/*  *
   * *
  *   *
 *     *
*       * 
*       *
 *     *
  *   *
   * *
    *
*/
int main()
{
    for(int i=1;i<=5;i++){
        for(int j=0;j<5-i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*i-1;k++){
            if(k==0 || k==2*i-2 ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=5;i>=1;i--){
        for(int j=0;j<5-i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*i-1;k++){
            if(k==0 || k==2*i-2 ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
   return 0;
}