#include<iostream>
using namespace std;
int main(){
    int a,b, studedentAnswer, correctAnswer;
    a=247;
    b=129;
    correctAnswer=a+b;
    cout << "what is the sum of " << a << " and " << b <<
    " ?\n";
    cin >> studedentAnswer;
    if(studedentAnswer==correctAnswer){
        cout << "congratulations! your answer is correct.";
    }
    else{
        cout << "sorry! your answer is incorrect. the correct answer is " << correctAnswer;
    }
    return 0;
}