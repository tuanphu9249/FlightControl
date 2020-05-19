#include <iostream>
using namespace std;
#include "Airport.h"
#include "Flight.h"

int Airport::totalID = 0;
Airport::Airport()
{
    name = "";
    ID = totalID++;
    numFlights = 0;
    flights = new Flight[100];
}

Airport::Airport(string aName)
{
    name = aName;
    numFlights = 0;
    flights = new Flight[100];
}

void Airport::setName(string aName)
{
    name = aName;
}

void Airport::addFlight(Flight* aFlight)
{
    flights[numFlights++] = *aFlight;
}


string Airport::getName()
{
    return name;
}

int Airport::getID()
{
    return ID; 
}

Flight* Airport::getFlights()
{
    return flights;
}

int Airport::getNumFlights()
{
    return numFlights;
}

Airport::~Airport()
{}



