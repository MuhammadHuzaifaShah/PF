#include<iostream>
using namespace std;
/*A university's grading system evaluates student success by looking at both their exam scores 
and their classroom engagement. When a student earns a score of 90 or above, the system performs a 
secondary check on their attendance records; if their attendance is higher than 95%, they are 
awarded "Grade A with Honors," otherwise, they receive a standard "Grade A."
For students whose scores fall within the mid-range of 50 to 89, the system ignores attendance and 
simply marks them as a "Pass."Finally, if a student's score fails to reach the 50-point threshold,
 the system automatically records a "Fail" regardless of how often they attended class.*/
int main(){
    int score;
    float attendance;
    cout<<"Enter your exam score: ";
    cin>>score;
    if(score>=90){
        cout<<"Enter your attendance percentage: ";
        cin>>attendance;
        if(attendance>95){
            cout<<"Grade A with Honors";
        }
        else{
            cout<<"Grade A";
        }
    }
    else if(score>=50 && score<90){
        cout<<"Pass";
    }
    else if(score<50){
        cout<<"Fail";
    }
    else{
        cout<<"Invalid score";
    }
    return 0;
}