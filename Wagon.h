#pragma once
#include<iostream>
#include<string>
#include "Capybara.h"
using namespace std;

class Wagon{
    public:
        Capybara cap1;
        Capybara cap2;
        Capybara cap3;
        Capybara cap4;
        int count_avaiable;

        Wagon();                              
        bool addCapybara(Capybara newCapy);    
        void emptyWagon();                     
        void printCapybaras();               
};

