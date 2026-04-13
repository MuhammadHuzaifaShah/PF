#include <iostream>
using namespace std;
/*Write a program that generates a grid of characters ('X' and 'O') that alternates both horizontally and
vertically — resembling a traditional chessboard where no two identical characters are adjacent.*/
int main() {
    int size;

    cout << "Enter board size: ";
    cin >> size;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            if ((i + j) % 2 == 0){
                cout << "x ";
            }
            else{
                cout << "o ";
            }
        }
        cout << endl;
    }

    return 0;
}