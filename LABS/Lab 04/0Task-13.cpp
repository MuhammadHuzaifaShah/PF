#include<iostream>
using namespace std;
/*In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. Determine,
what is the minimum number of steps he need to make in order to get to his friend's house.
Print the minimum number of steps that elephant needs to make to get from point 0 to point x*/
int main(){
    int num,step=0;
    cout <<"enter number: ";
    cin>> num;
    while(num>0){
        if(num%5==0){
            num=num/5;
        }
        else if(num%4==0){
            num=num/4;
        }
        else if(num%3==0){
            num=num/3;
        }
        else if(num%2==0){
            num=num/2;
        }
        else{
            num=num-1;
        }
        step++;
    }
    cout<<"minimum step required to reach on given input number is : "<<step;
    return 0;
}