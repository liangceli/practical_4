#pragma once
#include<iostream>
#include<string>
#include "Capybara.h"
using namespace std;

class Wagon{

    private:
    Capybara cap1;
    Capybara cap2;
    Capybara cap3;
    Capybara cap4;
    int count_avaiable;

    public:
    Wagon();                              
    bool addCapybara(Capybara newCapy);    
    void emptyWagon();                     
    void printCapybaras();               
};

