#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string cityName;
    int numEntries;
    cout << "Enter city name: ";
    getline(cin, cityName);
    cout << "Enter number of days: ";
    cin >> numEntries;
    if (numEntries < 3 || numEntries > 7) {
        cout << "Invalid input. Number of entries must be between 3 and 7." << endl;
        return 1;
    }
    ofstream fout("temperatures.txt");
    if (!fout) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }
    for (int i = 0; i < numEntries; i++) {
        double temp;
        cout << "Day " << (i + 1) << " temperature: ";
        cin >> temp;
        fout << temp << endl;
    }
    fout.close();
    cout << "Data saved to temperatures.txt" << endl;
    ifstream fin("temperatures.txt");
    if (!fin) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }
    double temp, sum = 0, minTemp = 0, maxTemp = 0;
    int count = 0, aboveAverageCount = 0;
    while (fin >> temp) {
        if (count == 0) {
            minTemp = maxTemp = temp;
        } else {
            if (temp < minTemp){
            minTemp = temp;
            }
            if (temp > maxTemp){ 
            maxTemp = temp;
            }
        }
        sum += temp;
        count++;
    }
    fin.close();
    double average = sum / count;
    ifstream finn("temperatures.txt");
    if (!finn) {
        cout << "Error reopening file for reading!" << endl;
        return 1;
    }
    while (finn >> temp) {
        if (temp > average) {
            aboveAverageCount++;
        }
    }
    cout << "--- Temperature Analysis for " << cityName << " ---" << endl;
    cout << "Min Temp : " << minTemp << " C" << endl;
    cout << "Max Temp : " << maxTemp << " C" << endl;
    cout << "Average : " << average << " C" << endl;
    cout << "Days above average: " << aboveAverageCount << endl;
    return 0;
}