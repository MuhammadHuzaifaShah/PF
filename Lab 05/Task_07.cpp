#include <iostream>
using namespace std;
/*Create a program that helps a user track monthly savings.
The program should repeatedly display this menu:
1. Calculate Savings for the Month
2. Exit
• If the user selects 1:
1. Ask for monthly income.
2. Ask for monthly expense per week.
3. Use a for loop to calculate total expenses for 4 weeks.
4. Subtract total expenses from income and display remaining savings.
• Use a do-while loop to repeat the menu until the user selects 2 (Exit).*/
int main()
{
    int choice;
    do
    {
        cout << "1. Calculate Savings for the Month" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            double monthlyIncome, weeklyExpense, totalExpenses = 0;
            cout << "Enter monthly income: ";
            cin >> monthlyIncome;
            cout << "Enter weekly expense: ";
            cin >> weeklyExpense;

            for (int week = 1; week <= 4; week++)
            {
                totalExpenses += weeklyExpense;
            }

            double savings = monthlyIncome - totalExpenses;
            cout << "Total expenses for the month: " << totalExpenses << endl;
            cout << "Remaining savings: " << savings << endl;
        }
        else if (choice == 2)
        {
            cout << "Exiting the program. Goodbye!" << endl;
        }
        else
        {
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 2);
   return 0;
}