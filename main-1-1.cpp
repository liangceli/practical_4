#include<iostream>
#include<string>
#include "Capybara.h"
using namespace std;

int main(){

    Capybara c1;
    Capybara c2;
    Capybara c3;
    Capybara c4;

    c1.setAge(1);
    cout<<c1.getAge()<<endl;

    c1.setName("A");
    cout<<c1.getName()<<endl;

    c2.setAge(2);
    cout<<c2.getAge()<<endl;

    c2.setName("B");
    cout<<c2.getName()<<endl;

    c3.setAge(3);
    cout<<c3.getAge()<<endl;

    c3.setName("C");
    cout<<c3.getName()<<endl;

    c4.setAge(4);
    cout<<c4.getAge()<<endl;

    c4.setName("D");
    cout<<c4.getName()<<endl;;



    return 0;
}