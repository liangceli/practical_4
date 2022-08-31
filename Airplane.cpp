#include<iostream>
#include<string>
#include"Person.h"
#include"Airplane.h"
using namespace std;


Airplane :: Airplane(string callsign, Person thePilot, Person theCoPilot){
    _callsign=callsign;
    Pilot=thePilot;
    CoPilot=theCoPilot;
}

void Airplane :: setPilot(Person thePilot){
    Pilot=thePilot;
}

Person Airplane :: getPilot(){
    return Pilot;
}

void Airplane :: setCoPilot(Person theCoPilot){
    CoPilot=theCoPilot;
}

Person Airplane :: getCoPilot(){
    return CoPilot;
}

void Airplane :: printDetails(){
   cout<<_callsign<<endl;
   string politname=Pilot.getName();
   cout<<politname<<endl;
   string copilotname=CoPilot.getName();
   cout<<copilotname<<endl; 
}    

