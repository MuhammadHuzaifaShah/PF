#include<iostream>
using namespace std;
int main(){
    float mass, g, height, potential_energy;
    g = 9.81; // Acceleration due to gravity in m/s^2
    cout << "Enter mass (in kg): ";
    cin >> mass;
    cout << "Enter height (in meters): ";
    cin >> height;
    potential_energy = mass * g * height;
    cout << "Potential Energy: " << potential_energy << " Joules" << endl;
    return 0;

}