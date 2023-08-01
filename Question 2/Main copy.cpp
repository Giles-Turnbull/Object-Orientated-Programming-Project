//include header files
#include "DateFile.h" // this is the header file for the Date class is techincally not needed
#include "TimeFile.h"
#include "PersonFile.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //create a time object
    Time t1;
    t1.setTime(12, 30, 45);
    t1.print();
}
