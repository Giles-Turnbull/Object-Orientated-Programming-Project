#include "Person.h"

#include <iostream>
#include <string>
using namespace std;

//class Student that inherits from Person
class Student : public Person
{
private:    //private data members
    string Dept;
public:     //public member functions
    Student(string x);
    void print();
    ~Student();
};
