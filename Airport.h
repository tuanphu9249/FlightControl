#ifndef AIRPORT_H
#define AIRPORT_H
#include <iostream>
#include "Flight.h"

using namespace std;


class Airport
{
    private:
        string name;
        Flight* flights;
        int numFlights;
        static int totalID;
        int ID;

    public:
        Airport();
        Airport(string aName);
        void addFlight(Flight* aFlight);
        void setName(string aName);
        void setID(int aID);

        string getName();
        Flight* getFlights();
        int getNumFlights();
        int getID();


        ~Airport();



};

#endif