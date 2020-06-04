#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

enum Genre {
	SciFi = 1
};

class Author {
	char* _name;
	int _birthYear;
public:
	Author(const char* name, int birthYear)
	{
		this->_name = new char[strlen(name) + 1];
		strcpy(this->_name, name);
		this->_birthYear = birthYear;
	}

	char* getName() {
		return _name;
	}
};

class Book {
	char* _name;
	int _year;
	int _page;
	Author* _author;
	Genre _genre;
public:
	Book() { 
		this->_name = nullptr;
		this->_year = 0;
		this->_page = 0;
		this->_author = nullptr;
	}

	Book(const char* name, int year, int page) : Book(name, year, page, "", 0) { // NOTE! => nullptr
		// assign new name
		this->_name = new char[strlen(name) + 1];
		strcpy(this->_name, name);

		this->_year = year;
		this->_page = page;
	}

	Book(const char* name, int year, int page, const char* authorName, int authorBirthYear) {
		// assign new name
		this->_name = new char[strlen(name) + 1];
		strcpy(this->_name, name);

		this->_year = year;
		this->_page = page;

		this->_author = new Author(authorName, authorBirthYear);
	}

	~Book()
	{
		delete[] this->_name;
		delete this->_author;
	}

	void setName(const char* name) {
		if (this->_name) {
			delete[] this->_name;
		}

		this->_name = new char[strlen(name) + 1];
		strcpy(this->_name, name);
	}

	char* getName() {
		return this->_name;
	}

	Author* getAuthor() {
		return this->_author;
	}
};

void main() {
	Book book("Harry Potter", 1999, 344, "JK Rowling", 1960);

	cout << book.getName() << endl;
	cout << book.getAuthor()->getName() << endl;

	book.setName("Harry Potter 2");
	cout << book.getName() << endl;

	Book book2("Harry Potter", 1999, 344);
}