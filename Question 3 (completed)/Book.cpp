#pragma once
#include "Author.h"
#include "Publisher.h"
#include "Book.h"

#include <iostream>
#include <string>
using namespace std;

//book constructor
Book::Book() { this->Title = ""; this->Borrowed = 0; }

//set Author function
void Book::setAuthor(Author a2)
{
	this->a1 = a2;
}

//Title get function
string Book::getTitle() {
	return Title;
}

//publisher set function
void Book::setPublisher(Publisher p2)
{
	this->p1 = p2;
}

//set book function
void Book::setBook(string Title, bool Borrowed)
{
	this->Title = Title;
	this->Borrowed = Borrowed;
}

//print function
void Book::print()
{
    cout << "Book title: " << Title << endl;
    cout << "Borrowed status: " << Borrowed << endl;
	b1.print();
	a1.print();
	p1.print();
}

//borrow set function
void Book::setBorrow(Borrow b2) 
{
	this->b1 = b2;
}

//destructor
Book::~Book()
{
    //cout << "Book object destroyed" << endl;
}