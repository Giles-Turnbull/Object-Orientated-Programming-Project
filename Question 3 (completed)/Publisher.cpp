#include "Publisher.h"

#include <iostream>
#include <string>
using namespace std;

//default constructor
Publisher::Publisher() { string Name = ""; }

//overloaded function as there is no set function
Publisher::Publisher(string Name)
{
    this->Name = Name;
}

//print function
void Publisher::print()
{
    cout << "Publisher: " << Name << endl;
}

//destructor
Publisher::~Publisher()
{
    //cout << "Publisher object destroyed" << endl;
}
