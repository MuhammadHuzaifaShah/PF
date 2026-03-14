#include <iostream>
using namespace std;
/*Develop a menu-driven system that allows a user to input a number in one format and convert it into
another*/
int main()
{
    cout << "Number conversion system" << endl;
    cout << "1.Decimal to binary" << endl;
    cout << "2.Binary to Decimal" << endl;
    cout << "3.Decimal to hexadecimal" << endl;
    cout << "4.Exit" << endl;
    int choice;
    cout << "Enter your choice" << endl;
    cin >> choice;
    if (choice == 1)
    {
        int num;
        cout << "Enter decimal number: ";
        cin >> num;

        int binary = 0;
        int place = 1;

        while (num > 0)
        {
            int remainder = num % 2;
            binary = binary + remainder * place;
            place = place * 10;
            num = num / 2;
        }

        cout << "Binary number: " << binary;
    }
    else if (choice == 2)
    {
        long long binary;
        int decimal = 0;
        int base = 1;
        int digit;

        cout << "Enter a binary number: ";
        cin >> binary;

        while (binary > 0)
        {
            digit = binary % 10;
            decimal = decimal + digit * base;
            base = base * 2;
            binary = binary / 10;
        }

        cout << "Decimal value = " << decimal;
    }
    else if (choice == 3)
    {
        int n;
        string hex = "";
        char hexDigits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                            'A', 'B', 'C', 'D', 'E', 'F'};

        cout << "Enter a decimal number: ";
        cin >> n;

        while (n > 0)
        {
            int remainder = n % 16;
            hex = hexDigits[remainder] + hex;
            n = n / 16;
        }
        cout << "Hexadecimal = " << hex;
    }
    else if (choice == 4)
    {
        cout << "Exit" << endl;
    }
    else
    {
        cout << "Invalid Number!";
    }
    return 0;
}