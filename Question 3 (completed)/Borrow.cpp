#include "Time.h"
#include "Student.h"
#include "Book.h"
#include "Borrow.h"

#include <iostream>
#include <string>
using namespace std;

//constructor
Borrow::Borrow() { Time length; Date BorrowDate; Date ReturnDate; }

//length set method
void Borrow::setLength(Time length)
{
    this->length = length;
}

//BorrowDate set method
void Borrow::setBorrowDate(Date BorrowDate)
{
    this->BorrowDate = BorrowDate;
}

//ReturnDate set method
void Borrow::setReturnDate(Date returnDate)
{
    this->ReturnDate = returnDate;
}

//print method
void Borrow::print()
{
    cout << "Length of borrow is " << endl;
    length.print();
    cout << "Borrow dates are: ";
    BorrowDate.print();
    ReturnDate.print();
    cout << "The student borrowing this book is: ";
    getName();
}

//destructor
Borrow::~Borrow()
{
    //cout << "Borrow object destroyed" << endl;
}