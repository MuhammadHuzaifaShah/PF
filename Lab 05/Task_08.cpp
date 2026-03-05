#include <iostream>
using namespace std;
/*A game has N players. Each player scores some points.
Write a program that:
1. Takes N scores from the user (one by one).
2. Finds the highest score and the second highest score.
3. Print both scores at the end.
Use only loops and if-else. No arrays or functions required*/
int main()
{
    int n;
    cout << "Enter the number of players: ";
    cin >> n;

    int highest = 0;
    int secondHighest = 0;

    for (int i = 1; i <= n; i++)
    {
        int score;
        cout << "Enter score for player " << i << ": ";
        cin >> score;

        if (score > highest)
        {
            secondHighest = highest;
            highest = score;
        }
        else if (score > secondHighest)
        {
            secondHighest = score;
        }
    }

    cout << "Highest score: " << highest << endl;
    cout << "Second highest score: " << secondHighest << endl;

   return 0;
}