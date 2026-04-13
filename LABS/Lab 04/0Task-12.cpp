#include<iostream>
using namespace std;
/*Ahmad and Ali are great fans of even numbers, that's why they want to divide the
watermelon in such a way that each of the two parts weighs even number of kilos,
at the same time it is not obligatory that the parts are equal. The boys are extremely
tired and want to start their meal as soon as possible, that's why you should help them
and find out, if they can divide the watermelon in the way they want. For sure, each of
them should get a part of positive weight.
Print YES, if the boys can divide the watermelon into two parts, each of them weighing 
even number of kilos;and NO in the opposite case.*/
int main(){
    int w;
    cout <<"enter weight in kilos: ";
    cin>>w;
    if(w%2==0 && w>=1 && w<=100){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}