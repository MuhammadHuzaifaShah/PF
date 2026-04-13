#include<iostream>
using namespace std;
/*Display all integers within the closed interval [1,30] that satisfy the condition of being
divisible by 2, ensuring that no additional values outside this specified domain are included
in the output*/
int main(){
    for(int i=1;i<=30;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    return 0;
}