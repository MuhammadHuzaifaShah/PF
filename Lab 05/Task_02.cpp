#include <iostream>
/*Write a C++ program for a Number Guessing Game.
Your program should:
1. Randomly select a number between 1 and 50.
2. Ask the user to guess the number.
3. After each guess, give feedback:
o If the guess is too high, print: "Too high! Try again."
o If the guess is too low, print: "Too low! Try again."
4. Keep asking until the user guesses the correct number.
5. When the user guesses correctly, print:
"Congratulations! You guessed the number in X tries."
where X is the number of attempts.
6. Use only while or do-while loops and if-else statements.
7. Do not use arrays or functions.*/
using namespace std;
int main()
{
    int number, guess, attempts = 0;
    int randomNumber= 34;
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 50. Can you guess it?" << endl;
    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > randomNumber)
        {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < randomNumber)
        {
            cout << "Too low! Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number in " << attempts << " tries." << endl;
        }
    } while (guess != randomNumber);
   return 0;
}