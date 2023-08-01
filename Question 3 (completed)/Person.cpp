#include "Person.h"

#include <iostream>
#include <string>

using namespace std;

//Person constructor
Person::Person() { this->name = "";}


//Person class set function
void Person::setName(string n)
{
    this->name = n;
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
    //cout << "Person object destroyed" << endl;
}