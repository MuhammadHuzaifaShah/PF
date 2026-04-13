#include<iostream>
using namespace std;
/*A particular brand of paint covers 340 square feet per gallon.
 Write a program to determine and report approximately how many gallons of 
paint will be needed to paint two coats on a wooden fence that is 6 feet high and 100 feet long.*/
int main(){
    float length, height, fence_area, total_area, gallons_needed;
    length = 100;
    height = 6;
    fence_area = length * height;
    total_area = 2 * fence_area; // Two coats
    gallons_needed = total_area / 340;
    cout << "Number of gallons needed: " << gallons_needed << endl;
    return 0;
}