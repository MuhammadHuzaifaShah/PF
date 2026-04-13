#include<iostream>
using namespace std;
/*A library checks if a member can borrow a "Premium Book" based on Membership Type and Existing Fines.
1. If the user is a "Gold Member":
Check if they have Outstanding Fines. If Fines > 0, display "Clear fines to borrow".
Otherwise, display "Borrowing allowed".
2. If the user is a "Regular Member":
They cannot borrow Premium books. Display "Upgrade to Gold to borrow".
3. If the user is "Not a Member":
Display "Please sign up for a membership".*/
int main(){
    string membership_type;
    float outstanding_fines;
    cout<<"Enter your membership type (Gold/Regular/None): ";
    cin>>membership_type;
    if(membership_type=="Gold"){
        cout<<"Enter your outstanding fines: ";
        cin>>outstanding_fines;
        if(outstanding_fines>0){
            cout<<"Clear fines to borrow";
        }
        else{
            cout<<"Borrowing allowed";
        }
    }
    else if(membership_type=="Regular"){
        cout<<"Upgrade to Gold to borrow";
    }
    else if(membership_type=="None"){
        cout<<"Please sign up for a membership";
    }
    else{
        cout<<"Invalid membership type";
    }
    return 0;
}