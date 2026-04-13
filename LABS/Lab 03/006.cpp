#include<iostream>
using namespace std;
/*Write an algorithm that asks the user to guess a secret number (for example: 8). The user
has up to 5 tries to guess it.
After each guess, if the number is correct, display "Correct Guess" and stop.
If the user does not guess correctly within 5 attempts, display "Game Over"*/
int main(){
    int guess;
    int secretNumber=8;
    int attempts=0;
    cout<<"Guess the secret number (between 1 and 10): ";
    while(attempts<5){
        cin>>guess;
        attempts++;
        if(guess==secretNumber){
            cout<<"Correct Guess"<<endl;
            return 0;
        }else{
            cout<<"Wrong guess. Try again."<<endl;
        }
    }
    cout<<"Game Over"<<endl;
    return 0;
}