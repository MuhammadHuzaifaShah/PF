#include <iostream>
using namespace std;
int main(){
    float t1,t2,t3;
    cout << "enter timeof t1 :";
    cin >> t1;
    cout << "enter timeof t2 :";
    cin >> t2;
    cout << "enter timeof t3 :";
    cin >> t3;
    if((t1<t2)&&(t1<t3)){
        cout << "first place runner1\n";
        if(t2<t3){
            cout << "second place runner2\n  third place runner3";
        }else{
             cout << "second place runner3\n  third place runner2";
        }
    }
    else if ((t2<t1)&&(t2<t3)){
        cout << "first place runner2";
        if(t1<t3){
            cout << "second place runner1\n  third place runner3";
        }else{
            cout << "second place runner3\n  third place runner1";
        }
    }
    else{
        cout << "first place runner3";
        if(t1<t2){
            cout << "second place runner1\n  third place runner2";
        }else{
            cout << "second place runner2\n  third place runner1";
        }
    }
    return 0;
}