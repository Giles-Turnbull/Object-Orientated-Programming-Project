#pragma once
#include "Date.h"

#include <iostream>
using namespace std;

class Person
{
private:    //private data members
    string name;
    Date DOB;   //composition
public:    //public member functions
    Person();
	void setName(string n); //set function
    void getName();
    void print();
	~Person();  //destructor
};