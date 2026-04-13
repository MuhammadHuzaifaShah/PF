#include<iostream>
using namespace std;
int main(){
    int no_of_items, price_per_item;
    float total_price, tax_rate, tax_amount, final_price;
    cout << "Enter number of items: ";
    cin >> no_of_items;
    cout << "Enter price per item: ";
    cin >> price_per_item;
    total_price = no_of_items * price_per_item;
    cout << "Total price before tax: " << total_price << endl;
    tax_rate = 0.05; // 5% tax
    tax_amount = total_price * tax_rate;
    final_price = total_price + tax_amount;
    cout << "Tax amount: " << tax_amount << endl;
    cout << "Final price after tax: " << final_price << endl;
    return 0;
}