#include <iostream>
using namespace std;
/*
  *                 *
  * *             * *
  * * *         * * *      
  * * * *     * * * * 
  * * * * * * * * * *
 */
int main()
{
    for(int i=1;i<=5;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        for(int k=0;k<2*(5-i);k++){
            cout<<"  ";
        }
        for(int l=0;l<i;l++){
            cout<<"* ";
        }
        cout<<endl;
    }
   return 0;
}