#include<iostream>
using namespace std;
int main(){
    int burgers, fries, pizzas;
    float subtotal, tax, total;
    cout << "Enter number of burgers: ";
    cin >> burgers;
    cout << "Enter number of fries: ";
    cin >> fries;
    cout << "Enter number of pizzas: ";
    cin >> pizzas;
    subtotal = (burgers * 5) + (fries * 3) + (pizzas * 8);
    tax = subtotal * 0.08;
    total = subtotal + tax;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Total: $" << total << endl;
    return 0;
}