#pragma once
#include<iostream>
#include<string>
using namespace std;

class Capybara{

    private:
    std::string name;
    int age;

    public:
    Capybara();
    void setName(string capyName);   
    string getName();
    void setAge(int capyAge);        
    int getAge();
};

