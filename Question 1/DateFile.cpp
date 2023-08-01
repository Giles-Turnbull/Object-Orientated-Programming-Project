//include header files
#include "Date.h"
#include <iostream>
using namespace std;

//Date class constructor
Date::Date(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
}

//Date class print function
void Date::print()
{
    cout << month << "/" << day << "/" << year << endl;
}

//Date class setDate function
void Date::setDate(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
}

//Date class destructor
Date::~Date()
{
    cout << "Date object destroyed" << endl;
}
