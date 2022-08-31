#include<iostream>
#include<string>
#include "Capybara.h"
#include"Wagon.h"

using namespace std;

int main(){
    Capybara c1;
    Capybara c2;
    Capybara c3;
    Capybara c4;
    Capybara c5;

    c1.setAge(1);
    c1.setName("A");

    c2.setAge(2);
    c2.setName("B");

    c3.setAge(3);
    c3.setName("C");

    c4.setAge(4);
    c4.setName("D");

    c5.setAge(5);
    c5.setName("E");

    Wagon the_wagon;
    

    Capybara C[5]={c1, c2, c3, c4, c5};

    for(int i=0; i<5; i++){
        if(the_wagon.addCapybara(C[i])==false){
            cout<<"the wagon is full"<<endl;
        }
    }

    the_wagon.printCapybaras();
    the_wagon.emptyWagon();

    return 0;
}

