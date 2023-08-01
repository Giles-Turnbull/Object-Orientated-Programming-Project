#include <iostream>
#include <vector>
#include "Date.h"
#include "Person.h"
#include "Author.h"
#include "Student.h"
#include "Publisher.h"
#include "Book.h"
#include "Borrow.h"



int main()
{
	//books vector
	vector<Book> books;

	//autuor object and date object
	Author a2("John");
	Date d1;
	d1.setDate(10, 12, 2022);

	//book object
	Book b1;
	b1.setBook("testing", 0);
	b1.setAuthor(a2);

	//borrow object
	Borrow p1;
	p1.setReturnDate(d1);
	p1.setName("James");
	b1.setBorrow(p1);

	//add book to vector
	books.push_back(b1);

	//create 20 books with random authors and names
	for (int i = 0; i < 20; i++) {
		//create random author
		Author a1("Author" + to_string(i));
		//create random publisher
		Publisher p1("Publisher" + to_string(i));
		//create random book
		Book b1;
		b1.setBook("Book" + to_string(i), 0);
		b1.setAuthor(a1);
		b1.setPublisher(p1);
		//add book to vector
		books.push_back(b1);
		//set borrower
		Borrow b2;
		b2.setName("Borrower" + to_string(i));
		b1.setBorrow(b2);
		//add book to vector
		books.push_back(b1);
	}

	//front end loop
	bool loop = true;
	while (loop == true) {
		int option;	//option for menu
		cout << "would you like to \n1. search a book?\n2. Add a book\n3. exit\n";
		cin >> option;	//get option from user
		if (option == 1) {	//search book
			cout << "what is the name of the book?";
			string bookName;
			cin >> bookName;	//get book name from user
			for (int i = 0; i < books.size(); i++) {	//loop through books vector
				if (books[i].getTitle() == bookName) {	//if book name is found
					books[i].print();	//print book
				}
			}
		}
		if (option == 2) {	//add book
			cout << "what is the name of the book?";
			string bookName;
			cin >> bookName;	//get book name from user
			Book b1;	//book object
			b1.setBook(bookName, 0);
			books.push_back(b1);
		}
		if (option == 3) {	//exit
			loop = false;
		}
	}
}