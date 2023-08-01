#include "Author.h"

#include <iostream>
#include <string>
using namespace std;

//Author constructor
Author::Author() { Employer = " "; }


Author::Author(string Employer)
	: Employer(Employer)
{
}

//Author print function
void Author::print()
{
    cout << "The Author is: " << Employer << endl;
}

//Author destructor
Author::~Author()
{
    //cout << "Author object destroyed" << endl;
}