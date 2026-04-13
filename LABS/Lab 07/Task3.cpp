#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
int main()
{
    ifstream fin("orders.txt");
    if (!fin) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    int orderID, orderAmount, totalOrders = 0, highValueOrders = 0;
    string customerName;
    int highestAmount = 0, lowestAmount = 0;
    string highestCustomer, lowestCustomer;
    int highestOrderID, lowestOrderID;
    while (fin >> orderID) {
        if (orderID == -1) {
            break;
        }
        fin >> orderAmount;
        fin.ignore(); 
        getline(fin, customerName);
        
        totalOrders++;
        if (orderAmount >= 1000) {
            highValueOrders++;
        }
        if (totalOrders == 1 || orderAmount < lowestAmount) {
            lowestAmount = orderAmount;
            lowestCustomer = customerName;
            lowestOrderID = orderID;
        }
        if (orderAmount > highestAmount) {
            highestAmount = orderAmount;
            highestCustomer = customerName;
            highestOrderID = orderID;
        }
    }

    cout << highValueOrders << " out of " << totalOrders << " orders are high-value orders" << endl;
    cout << "Highest order:" << endl;
    cout << "Customer Name: " << highestCustomer << endl;
    cout << "Order ID: " << highestOrderID << endl;
    cout << "Amount: " << highestAmount << endl;
    cout << endl;
    cout << "Lowest order:" << endl;
    cout << "Customer Name: " << lowestCustomer << endl;
    cout << "Order ID: " << lowestOrderID << endl;
    cout << "Amount: " << lowestAmount << endl;

   return 0;
}