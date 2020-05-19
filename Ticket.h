#ifndef TICKET_H
#define TICKET_H
#include "Flight.h"
#include <iostream>
using namespace std;

class Ticket
{
    protected:
        Flight* flight;
        string name;
        string DOB;
        string seatNumber;
        string type;
        int price;
    public:
        Ticket();
        Ticket(Flight* aFlight, string aName, string aDOB, string aSeatNumber);
        int getPrice();
        virtual void setPrice();
        Flight* getFlight();
        string getName();
        string getDOB();
        string getSeatNumber();        

        void setFlight(Flight* aFlight);
        void setName(string aName);
        void setDOB(string aDOB);
        void setSeatNumber(string aSeatNumber);
        

        ~Ticket();


};

#endif