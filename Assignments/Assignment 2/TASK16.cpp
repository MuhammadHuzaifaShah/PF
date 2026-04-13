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
    while (size < 2 || size % 2 != 0)
    {
        cout << "Invalid input. Enter again: ";
        cout << "Enter size: ";
        cin >> size;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i > j)
            {
                cout << "0";
            }
            else
            {
                cout << "1";
            }
        }
        cout << endl;
    }
   return 0;
}