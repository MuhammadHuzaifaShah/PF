#include<iostream>
using namespace std;
/*E-Commerce Shipping Calculator 
Statement: A store calculates shipping costs based on location and order total. 
1.	Check if the Location is "Local" or "International". 
2.	If the location is Local: 
o	Check if the Order Total is above $50. If true, shipping is "Free". 
o	Otherwise, shipping is "$5". 
3. If the location is International: 
o	Check if the Order Total is above $150. If true, shipping is "$15". 
o	Otherwise, shipping is "$30". 
*/
int main(){
    string location;
    double orderTotal;

    cout << "Enter your location (Local/International): ";
    cin >> location;

    cout << "Enter your order total: ";
    cin >> orderTotal;

    if (location == "Local") {
        if (orderTotal > 50) {
            cout << "Shipping: Free" << endl;
        } else {
            cout << "Shipping: $5" << endl;
        }
    } else if (location == "International") {
        if (orderTotal > 150) {
            cout << "Shipping: $15" << endl;
        } else {
            cout << "Shipping: $30" << endl;
        }
    } else {
        cout << "Invalid location entered." << endl;
    }

    return 0;
}