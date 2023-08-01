#include "Date.h"

#include <iostream>
using namespace std;

class Person
{
    private:    //private data members
        string name;
        Date DOB;   //composition
    public:    //public member functions
        Person(string name, Date DOB);
        void setName(string n);
        void getName();
        void print();
        ~Person();
};
