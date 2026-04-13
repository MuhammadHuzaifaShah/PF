#include <iostream>
using namespace std;
// Muhammad Huzaifa Shah
// Roll Number: BITF25A036
// BS IT (aft)
int main() 
{
    int math_Total=0,science_Total=0,english_Total=0;
    for(int i=1;i<=5;i++){
        string name;
        int math,science,english,total;
        float avg;
        cout << "Enter name and marks for Student "<< i<< ":" << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Math: ";
        cin >> math;
        cout << "Science: ";
        cin >> science;
        cout << "English: ";
        cin >> english;
        total=math+science+english;
        avg=total/3.0;
        math_Total +=math;
        science_Total +=science;
        english_Total +=english;
        cout <<"--------- Results ---------"<< endl;
        cout << name <<" | Total: "<< total <<" | Avg: "<< avg << endl;
     }
     float math_Avg=math_Total/5.0,science_Avg=science_Total/5.0,english_Avg=english_Total/5.0;
     cout <<"Class Avg -> Math: "<< math_Avg <<" Science: "<< science_Avg <<" English: "<< english_Avg << endl; 
    return 0;
}