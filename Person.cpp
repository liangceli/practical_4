#include<iostream>
#include<string>
#include"Person.h"
using namespace std;

Person :: Person(int mySalary, string myName){
    Salary=mySalary;
    Name=myName;
}

void Person :: setName(string myName){
    Name=myName;
}

string Person :: getName(){
    return Name;
}

void Person :: setSalary(int mySalary){
    Salary=mySalary;
}

int Person :: getSalary(){
    return Salary;
}