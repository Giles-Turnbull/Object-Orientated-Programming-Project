#pragma once
#include <iostream>
using namespace std;

class Time
{
private:    //private data members
    int hour;
    int minute;
    int second;
public:   //public member functions
    ~Time();    //destuctor
    Time();     //default constuctor
    void setTime(int h, int m, int s); //set function
    void print(); //print function
};