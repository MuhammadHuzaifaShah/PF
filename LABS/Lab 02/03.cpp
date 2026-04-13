#include<iostream>
using namespace std;
/*A smart sensor controls a light based on Motion detected and the Time of Day (24-hour format).
1.If Motion Detected is TRUE:
Check the Hour. If the Hour is between 22 and 6 (Night), set Light Brightness to "30%".
If the Hour is between 7 and 21 (Day), set Light Brightness to "100%".
2. If Motion Detected is FALSE:
Set Light to "OFF".*/
int main(){
    bool motion_detected;
    int hour;
    cout<<"Is motion detected? (1 for true, 0 for false): ";
    cin>>motion_detected;
    cout<<"Enter the hour of the day (0-23): ";
    cin>>hour;
    if(motion_detected){
        if(hour>=22 || hour<=6){
            cout<<"Light Brightness: 30%";
        }
        else if(hour>=7 && hour<=21){
            cout<<"Light Brightness: 100%";
        }
        else{
            cout<<"Invalid hour";
        }
    }
    else{
        cout<<"Light is OFF";
    }
    return 0;
}