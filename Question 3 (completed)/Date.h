#pragma once
#include <iostream>
using namespace std;

class Date
{
private:    //private data members
    int month;
    int day;
    int year;
public:    //public member methods
    Date(); //default constuctor
    void setDate(int m, int d, int y);
    void print(); //print function
    ~Date();    //destructor
};
