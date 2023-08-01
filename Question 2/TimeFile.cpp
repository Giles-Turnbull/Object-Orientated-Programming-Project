#include <iostream>
#include "Time.h"
using namespace std;

//Time class constructor
Time::Time()
{
    hour = 0;
    minute = 0;
    second = 0;
}

//Time class set function
void Time::setTime(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}

//Time class print function
void Time::print()
{
    cout << hour << ":" << minute << ":" << second << endl;
}

//Time class destructor
Time::~Time()
{
    cout << "Time object destroyed" << endl;
}
