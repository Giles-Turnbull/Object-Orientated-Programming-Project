#include "Person.h"

#include <iostream>
#include <string>
using namespace std;

//class Author that inherits from Person
class Author : public Person    //inherit from Person
{
private:
    string Employer;
public:
    Author(string Employer);
    void print();
    ~Author();
};
