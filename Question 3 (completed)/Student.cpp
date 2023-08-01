#include "Student.h"

#include <iostream>
#include <string>
using namespace std;

Student::Student() { Dept = ""; }

void Student::setDept(string Dept)
{
	this->Dept = Dept;
}

void Student::print()   //print function
{
    cout << Dept << endl;
    Person::print();
}

Student::~Student() //destructor
{
    //cout << "Student object destroyed" << endl;
}