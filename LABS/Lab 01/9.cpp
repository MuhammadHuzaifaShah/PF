#include<iostream>
using namespace std;
int main(){
    float weight, distance, total_cost;
    cout << "Enter weight of the package (in kg): ";
    cin >> weight;
    cout << "Enter distance to be shipped (in km): ";
    cin >> distance;
    total_cost = 10 + (weight * 2) + (distance * 0.5);
    cout << "Total Shipping Cost: $" << total_cost << endl;
    return 0;
}