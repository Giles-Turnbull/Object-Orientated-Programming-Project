#include "Author.h"

#include <iostream>
#include <string>
using namespace std;

//Author constructor
Author::Author(string Employer)
    : Employer(Employer)
{
}

//Author print function
void Author::print()
{
    cout << Employer << endl;
    Person::print();
}

//Author destructor
Author::~Author()
{
    cout << "Author object destroyed" << endl;
}
