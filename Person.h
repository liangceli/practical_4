#pragma once
#include<iostream>
#include<string>
using namespace std;

class Person{

    private:
    std::string Name;
    int Salary;

    public:
    Person(int mySalary, string myName);
    void setName(string myName);
    string getName();
    void setSalary(int mySalary);
    int getSalary();
};


