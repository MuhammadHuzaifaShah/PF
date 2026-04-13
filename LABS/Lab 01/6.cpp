#include <iostream>
using namespace std;
int main(){
    float A1, A2, exams, weighted_score;
    cout << "Enter Assignment 1 score: ";
    cin >> A1;
    cout << "Enter Assignment 2 score: ";
    cin >> A2;
    cout << "Enter Exams score: ";
    cin >> exams;
    weighted_score = (A1 * 0.2) + (A2 * 0.3) + (exams * 0.50);
    cout << "A1 weight: " << A1 * 0.2 << endl;
    cout << "A2 weight: " << A2 * 0.3 << endl;
    cout << "Exams weight: " << exams * 0.5 << endl;
    cout << "Weighted Score: " << weighted_score << endl;
    return 0;
}
