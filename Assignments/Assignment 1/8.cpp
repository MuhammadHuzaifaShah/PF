#include<iostream>
using namespace std;
int main(){
    float choice,r,l,w,base,height;
    cout << "enter choice :";
    cin >> choice;
    if(choice==1){
        cout << "enter radius :";
        cin >> r;
        cout << "area of circle is :" << 3.14*r*r;
    }
    else if(choice==2){
        cout << "enter length and width :";
        cin >> l >> w;
        cout << "area of rectangle is :" << l*w;
    }
    else if(choice==3){
        cout << "enter base and height :";
        cin >> base >> height;
        cout << "area of triangle is :" << 0.5*base*height;
    }
    else{
        cout << "invalid choice";
    }
    return 0;
}