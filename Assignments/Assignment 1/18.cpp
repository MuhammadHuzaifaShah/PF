#include<iostream>
using namespace std;
/*The health club offers three monthly rates:
•	Standard Adult: Rs. 40.00 / month
•	Child (under 12): Rs. 20.00 / month
•	Senior Citizen: Rs. 30.00 / month
•  Display a numbered list of choices (1-4) for the user:
1.	Standard Adult Membership
2.	Child Membership
3.	Senior Citizen Membership
4.	Quit the Program
•  User Input: * Ask the user to enter their choice (1, 2, 3, or 4).
•	If they choose 1, 2, or 3, ask them for the number of months they wish to join.
Print the total amount they have to pay.
*/
int main(){
    int choice,months;
    cout << "which type of membership you want to buy (1,2,3) :";
    cin >> choice;
    if(choice>=1 && choice<=3){
        cout << "enter number of months you wish to join :";
        cin >> months;
        switch(choice){
            case 1:
                cout << "total amount you have to pay is : " << 40*months;
                break;
            case 2:
                cout << "total amount you have to pay is : " << 20*months;
                break;
            case 3:
                cout << "total amount you have to pay is : " << 30*months;
                break;
        }
    }
    else if(choice==4){
        cout << "you chose to quit the program";
    }
    else{
        cout << "invalid choice";
    }
    return 0;
}