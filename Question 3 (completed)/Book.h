#pragma once
#include "Author.h"
#include "Publisher.h"
#include "Borrow.h"

#include <iostream>
#include <string>
using namespace std;

class Book
{
private:    //class variables
    string Title;
    bool Borrowed;
	Author a1;  //composition relationship with Author class
	Publisher p1;   //composition relationship with publisher
	Borrow b1;  //composition relationship with borrow
	
public:
	Book(); //constructor
	void setAuthor(Author a2);
    void setPublisher(Publisher p2);
    void setBook(string Title, bool borrowed);
    void print();
    string getTitle();
    void setBorrow(Borrow b2);
    ~Book();    //destructor
};
