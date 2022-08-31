#include<iostream>
#include<string>
#include "Capybara.h"
#include "Wagon.h"

using namespace std;


Wagon :: Wagon(){
    count_avaiable=4;
}

bool Wagon :: addCapybara(Capybara newCapy){
    if(count_avaiable<=0){
        return false;
    }
    if(count_avaiable==1){
        cap4=newCapy;
        count_avaiable--;
    }
    if(count_avaiable==2){
        cap3=newCapy;
        count_avaiable--;
    }
    if(count_avaiable==3){
        cap2=newCapy;
         count_avaiable--;
    }
    if(count_avaiable==4){
        cap1=newCapy;
        count_avaiable--;
    }
    
    return true;
};

void Wagon :: emptyWagon(){
    count_avaiable=4;
}

void Wagon :: printCapybaras(){
    if(count_avaiable==3){
        cout<<cap1.getName()<<" "<<cap1.getAge()<<endl;
    }

    if(count_avaiable==2){
        cout<<cap1.getName()<<" "<<cap1.getAge()<<endl;
        cout<<cap2.getName()<<" "<<cap2.getAge()<<endl;
    }

    if(count_avaiable==1){
        cout<<cap1.getName()<<" "<<cap1.getAge()<<endl;
        cout<<cap2.getName()<<" "<<cap2.getAge()<<endl;
        cout<<cap3.getName()<<" "<<cap3.getAge()<<endl;
    }

    if(count_avaiable==0){
        cout<<cap1.getName()<<" "<<cap1.getAge()<<endl;
        cout<<cap2.getName()<<" "<<cap2.getAge()<<endl;
        cout<<cap3.getName()<<" "<<cap3.getAge()<<endl;
        cout<<cap4.getName()<<" "<<cap4.getAge()<<endl;
    }
}

