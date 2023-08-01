#include "Student.h"

#include <iostream>
#include <string>
using namespace std;

Student::Student(string x)  //constructor
{
    this->Dept = x;
}

void Student::print()   //print function
{
    cout << Dept << endl;
    Person::print();
}

Student::~Student() //destructor
{
    cout << "Student object destroyed" << endl;
}
