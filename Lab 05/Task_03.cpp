#include <iostream>
using namespace std;
/*Write a C++ program that:
1. Ask the user to enter total available tickets in the cinema.
2. Then repeatedly ask the user how many tickets they want to book.
3. For each request:
• If the requested number is less than or equal to available tickets, approve the
booking and reduce the available tickets.
• If the requested number is more than available tickets, print "Not enough
tickets! Try again."
4. Continue this process using a do-while loop until all tickets are sold out (available tickets
= 0).
5. Display how many bookings were successfully made and how many tickets were left
(should be 0 at the end).
Use only do-while loop and if-else.*/
int main()
{
    int totalTickets, requestedTickets, successfulBookings = 0;
    cout << "Enter total available tickets in the cinema: ";
      cin >> totalTickets;
      do
      {
         cout << "Enter number of tickets to book: ";
         cin >> requestedTickets;
   
         if (requestedTickets <= totalTickets)
         {
               totalTickets -= requestedTickets;
               successfulBookings++;
               cout << "Booking successful! Tickets left: " << totalTickets << endl<<endl;
         }
         else
         {
               cout << "Not enough tickets! Try again." << endl;
         }
      } while (totalTickets > 0);
      cout << "All tickets sold out!" << endl;
      cout << "Total successful bookings: " << successfulBookings << endl;
   return 0;
}