#include<iostream>
using namespace std;
/*Ask user which TV model he wants to purchase and display the features of the respective model .
Model 300  has features Picture-in-a-picture, Stereo sound, and Remote control
Model 200		Stereo sound and Remote control
Model 		100Remote control only
*/
int main(){
    int model;
    cout << "which TV model you want to purchase (100,200,300) :";
    cin >> model;
    switch(model){
        case 300:
            cout << "Picture-in-a-picture, Stereo sound, and Remote control";
            break;
        case 200:
            cout << "Stereo sound and Remote control";
            break;
        case 100:
            cout << "Remote control only";
            break;
        default:
            cout << "invalid model number";
    }
    return 0;
}