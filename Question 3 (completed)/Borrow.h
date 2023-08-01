#pragma once
#include "Time.h"
#include "Student.h"
#include "Book.h"
#include "Student.h"

#include <iostream>
#include <string>
using namespace std;

class Borrow : public Student
{
private:    //private variables
    Time length;    //composition relationship with time
    Date BorrowDate;    //composition relationship with date
	Date ReturnDate;    //composition relationship with date
public:     
    Borrow();   //constructor
	void setLength(Time length);
	void setBorrowDate(Date BorrowDate);
	void setReturnDate(Date returnDate);
    void print();
    ~Borrow();  //destructor
};
