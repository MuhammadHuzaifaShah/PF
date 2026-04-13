#include<iostream>
using namespace std;
/*Design an algorithm that continuously accepts integer inputs from the user until the sentinel
value -1 is entered. After input termination, determine and display separately:
➢ the total number of even integers entered
➢ the total number of odd integers entered
Ensure that the sentinel value -1 is not included in either count*/
int main(){
    int num;
    int evenCount=0;
    int oddCount=0;
    cout<<"Enter integers (enter -1 to stop): ";
    cin>>num;
    while(num!=-1){
        if(num%2==0){
            evenCount++;
        }else{
            oddCount++;
        }
        cin>>num;
    }
    cout<<"Total even integers entered: "<<evenCount<<endl;
    cout<<"Total odd integers entered: "<<oddCount<<endl;
    return 0;
}