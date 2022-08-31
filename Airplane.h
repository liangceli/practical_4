#pragma once
#include<iostream>
#include<string>
#include"Person.h"
using namespace std;

class Airplane{

    private:
    Person Pilot;
    Person CoPilot;
    string _callsign;

    public:
    Airplane(string callsign, Person thePilot, Person theCoPilot);
    void setPilot(Person thePilot);      
    Person getPilot();
    void setCoPilot(Person theCoPilot);  
    Person getCoPilot();
    void printDetails();                 
};
