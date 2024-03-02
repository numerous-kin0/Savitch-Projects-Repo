//Author: Mabo Giqwa
//Date created: 15-03-2023
//Program description: A theatre sells seats for shows and needs a system to keep track of the  
//seats they have sold tickets for.
//Practice problem in Chapter 10 Problem Solving with C++
#include <iostream>
#include <cstdlib>
using namespace std;

class ShowTicket
{
   public:
     ShowTicket(int row1, int seatNumber1, bool ticketA);
     ShowTicket();
     int getRow();
     int getSeatNumber();
     bool getTicketAvailability();
     bool getStatus();
     void update();
     void checkInput();
   private:
     int row;
     int seatNumber;
     bool ticketAvailability;
     bool sold;
};
void output(ShowTicket& ticket, ostream& outs);

int main()
{
   ShowTicket ticket1(1,45, true), ticket2(6,32, false);
   ShowTicket ticket3(8,14, true);

   cout << "************************" << endl;
   output(ticket1, cout);
   output(ticket2, cout);
   output(ticket3, cout);

   return 0;
};
ShowTicket::ShowTicket(int row1, int seatNumber1, bool ticketA)
{
    row = row1;
    seatNumber = seatNumber1;
    ticketAvailability = ticketA;
    sold = false;
}
ShowTicket::ShowTicket() : row(0), seatNumber(0), ticketAvailability(false),
                           sold(false)
{
};
int ShowTicket::getRow()
{
    return row;
};
int ShowTicket::getSeatNumber()
{
    return seatNumber;
};
bool ShowTicket::getStatus()
{
    return sold;
};
bool ShowTicket::getTicketAvailability()
{
    return ticketAvailability;
};
void ShowTicket::checkInput()
{
     if((seatNumber < 0) || (seatNumber > 50)) {
        cout << "Seat number is invalid, program is exiting." << endl;
        exit(1);
     } else if((row < 0) || (row > 10)) {
        cout << "Row number is invalid, program is exiting." << endl;
        exit(1);
     };
};
void ShowTicket::update()
{
    if(ticketAvailability)
        sold = true;
};
void output(ShowTicket& ticket, ostream& outs)
{
   ticket.checkInput();
   cout << "The row number is " << ticket.getRow() << endl;
   cout << "The seat number is " << ticket.getSeatNumber() << endl;
   ticket.update();
   if(ticket.getStatus())
        cout << "The ticket is available." << endl;
   else
        cout << "The ticket is not available" << endl;
   cout << "************************" << endl;
};