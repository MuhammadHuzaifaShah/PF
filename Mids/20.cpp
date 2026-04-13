#include <iostream>
using namespace std;

int main()
{
    int start , rows, columns;
    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    int originalStart = start;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << start << " ";
            start=start + 2;
        }
        start =originalStart;
        start = start -2;
        originalStart = originalStart - 2;
        cout << endl;
    }
   return 0;
}