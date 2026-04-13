#include<iostream>
using namespace std;
int main(){
    float mass,weight;
    cout << "enter mass of object :";
    cin >> mass;
    weight=mass*9.8;
    if(weight>1000){
        cout << "object is too heavy";
    }
    else if(weight<10){
        cout << "object is too light";
    }
    else{
        cout << "object weight is : " << weight;
    }
    return 0;

}