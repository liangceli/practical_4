#include<iostream>
#include<string>
#include "Person.h"
using namespace std;

int main(){

    Person p1=Person(1000, "leo");
    p1.setName("Peter");
    p1.setSalary(2000);

    cout<<"Creat a person's information: "<<p1.Person<<endl;

    cout<<"Update the person's information: "<<p1.getName()<<" "<<p1.getSalary()<<endl;

    return 0;
}