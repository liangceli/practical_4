#include<iostream>
#include<string>
#include"Person.h"
#include"Airplane.h"
using namespace std;

int main(){

    Person p1=Person(1000,"A");
    Person p2=Person(2000,"B");
    Person p3=Person(3000,"C");

    Airplane theairplane("ok to land", p1, p2);
    theairplane.printDetails();
    theairplane.setPilot(p3);
    theairplane.setCoPilot(p1);
    theairplane.printDetails();
    return 0;
}