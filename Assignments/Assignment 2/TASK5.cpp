#include <iostream>
using namespace std;
// Muhammad Huzaifa Shah
// Roll Number: BITF25A036
// BS IT (aft) 
int main()
{
    int years;
    float rain_Fall=0,year_Total=0,total_Month=0,total_Rain_Fall=0,avg_Rain_Fall;
    cout << "Enter number of years: ";
    cin >> years;
    while (years<1)
    {
        cout <<"Invalid input enter again: ";
        cout << "Enter number of years: ";
        cin >> years;
    }
    
    for(int i=1;i<=years;i++){
        cout <<"Year: "<< years <<endl;
        for(int j=1;j<=12;j++){
            cout << "Month "<< j<< " rainfall (inches): ";
            cin >> rain_Fall;
            while (rain_Fall<1)
            {
                cout << "Invalid input";
                cout << "Month "<< j<< " rainfall (inches): ";
                cin >> rain_Fall;
            }
            total_Month ++;
            year_Total +=rain_Fall;
            total_Rain_Fall +=rain_Fall;
        }
        cout << "Year " << i << " Total rainfall is :"<< year_Total << "inches"<<endl;
    }
    avg_Rain_Fall=total_Rain_Fall/total_Month;
    cout << "----------statictics---------"<< endl;
    cout << "Total months recorded : " << total_Month << endl;
    cout << "Average monthly rainfall: " << avg_Rain_Fall << " inches" << endl;
   return 0;
}