#include<iostream>
using namespace std;
int main(){
    float distance, time, speed;
    cout << "Enter distance (in km): ";
    cin >> distance;
    cout << "Enter time (in hours): ";
    cin >> time;
    speed = distance / time;
    cout << "Speed: " << speed << " km/h" << endl;
    return 0;
}