#include<iostream>
using namespace std;
/*Design pseudocode (sequence only) that:
Takes input for 2 students: name and marks in 3 subjects (Math, Science, English).
Calculates for each student:
Total marks
Average marks
Then calculates class averages for Math, Science, and English.
Finally displays:
Each student’s name, total, average
Class averages for each subject*/
int main() {
    string name1, name2;
    int marks1[3], marks2[3];
    int total1 = 0, total2 = 0;
    float avg1, avg2;
    float classAvg[3] = {0, 0, 0};

    // Input for student 1
    cout << "Enter name of student 1: ";
    cin >> name1;
    cout << "Enter marks in Math, Science, English for " << name1 << ": ";
    for(int i = 0; i < 3; i++) {
        cin >> marks1[i];
        total1 += marks1[i];
        classAvg[i] += marks1[i];
    }
    avg1 = total1 / 3.0;

    // Input for student 2
    cout << "Enter name of student 2: ";
    cin >> name2;
    cout << "Enter marks in Math, Science, English for " << name2 << ": ";
    for(int i = 0; i < 3; i++) {
        cin >> marks2[i];
        total2 += marks2[i];
        classAvg[i] += marks2[i];
    }
    avg2 = total2 / 3.0;

    // Calculate class averages
    for(int i = 0; i < 3; i++) {
        classAvg[i] /= 2.0;
    }

    // Display results
    cout << "\nStudent: " << name1 << ", Total Marks: " << total1 << ", Average Marks: " << avg1 << endl;
    cout << "Student: " << name2 << ", Total Marks: " << total2 << ", Average Marks: " << avg2 << endl;
    cout << "\nClass Averages:\n";
    cout << "Math: " << classAvg[0] << "\nScience: " << classAvg[1] << "\nEnglish: " << classAvg[2] << endl;
  return 0;   
}