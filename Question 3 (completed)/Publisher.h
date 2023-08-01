#pragma once
#include <iostream>
#include <string>
using namespace std;

//class Publisher
class Publisher
{
private:    //private variables
    string Name;
public:
    Publisher(string Name); //overloaded constuctor as no set function
	Publisher();    //default constructor
    void print();
	~Publisher();   //destructor
};