#include "Publisher.h"

#include <iostream>
#include <string>
using namespace std;

Publisher::Publisher(string Name)
{
    this->Name = Name;
}

void Publisher::print()
{
    cout << "Publisher: " << Name << endl;
}

Publisher::~Publisher()
{
    cout << "Publisher object destroyed" << endl;
}

