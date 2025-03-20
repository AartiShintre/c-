#include<iostream>
using namespace std;
class Ticket_booking{
	public:
	 int max_seat=50;       
     int booked_seats=0; 
	public:
	void setinfo(int no_of_ticket) {
        try {
            if (no_of_ticket <= 0) {
                throw "Invalid number of tickets!";
            }
            if (no_of_ticket + booked_seats > max_seat) {
                throw "Sorry! Not enough seats available.";
            }

            booked_seats += no_of_ticket; 
            int remaining_seats = max_seat - booked_seats;

            cout << "You have successfully booked " << no_of_ticket << " ticket(s)." << endl;
          
            cout << "Seats remaining: " << remaining_seats << endl;
        }
        catch (const char* str) {
            cout << "Exception: " << str << endl;
        }
    
	 } 
    void getinfo() {
        int remaining_seats = max_seat - booked_seats;
        cout << "Seats available: " << remaining_seats << endl;
    }
		
};
int main()
{
	Ticket_booking ticket_booking;
	int no_of_ticket;
    
    cout << "Enter how many tickets you want: ";
    cin >> no_of_ticket;
    ticket_booking.setinfo(no_of_ticket);
    ticket_booking.getinfo();
    
	
}

