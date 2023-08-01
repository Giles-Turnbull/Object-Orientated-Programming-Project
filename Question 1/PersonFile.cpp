#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

//Person class constructor
Person::Person(string name, Date DOB)
: name(name), DOB(DOB)  //initialization list
{
}

//Person class set function
void Person::setName(string n)
{
    name = n;
}

//Person class print function
void Person::getName()
{
    cout << name << endl;
}

//Person class print function
void Person::print()
{
    cout << name << endl;
    DOB.print();
}

//Person class destructor
Person::~Person()
{
    cout << "Person object destroyed" << endl;
}
