#include <iostream>
#include <iomanip>
using namespace std;
// Muhammad Huzaifa Shah
// Roll Number: BITF25A036
// BS IT (aft)
int main()
{
    int hours, minutes, seconds;
    for(hours = 0; hours < 24; hours++){
        for(minutes = 0; minutes < 60; minutes++){
            for(seconds = 0; seconds < 60; seconds++){
                cout << setw(2) << setfill('0') << hours << ":"
                     << setw(2) << setfill('0') << minutes << ":"
                     << setw(2) << setfill('0') << seconds << endl;
            }
        }
    }
   return 0;
}