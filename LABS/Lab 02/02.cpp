#include<iostream>
using namespace std;
/*A store calculates shipping costs based on location and order total.
Check if the Location is "Local" or "International".
If the location is Local:
Check if the Order Total is above $50. If true, shipping is "Free".
Otherwise, shipping is "$5".
If the location is International:
Check if the Order Total is above $150. If true, shipping is "$15".
Otherwise, shipping is "$30".*/
int main(){
    string location;
    float order_total;
    cout<<"Enter your location (Local/International): ";
    cin>>location;
    cout<<"Enter your order total: ";
    cin>>order_total;
    if(location=="Local"){
        if(order_total>50){
            cout<<"Shipping is Free";
        }
        else{
            cout<<"Shipping is $5";
        }
    }
    else if(location=="International"){
        if(order_total>150){
            cout<<"Shipping is $15";
        }
        else{
            cout<<"Shipping is $30";
        }
    }
    else{
        cout<<"Invalid location";
    }
    return 0;
}