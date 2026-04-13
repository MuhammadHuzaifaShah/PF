#include <iostream>
using namespace std;
// Muhammad Huzaifa Shah
// Roll Number: BITF25A036
// BS IT (aft)
int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    while (size < 1 || size % 2 == 0)
    {
        cout << "Invalid input. Enter again: ";
        cout << "Enter size: ";
        cin >> size;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int num = min(min(i, j), min(size - 1 - i, size - 1 - j)) + 1;
            cout << num << " ";
        }
        cout << endl;
    }
   return 0;
}