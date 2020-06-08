#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Book.h"
using namespace std;

// copy constructor
class String {
	char* _data; // #FFFF1
	int _length;
public:
	String() : _data(nullptr), _length(0) {
	}

	String(const char* data) {
		this->_data = new char[strlen(data) + 1];
		strcpy(this->_data, data);

		_length = strlen(data);
	}

	// copy constructor syntax
	String(const String& oth) {
		cout << "COPYYYYYYYY CALLEDDDD\n";
		this->_data = new char[strlen(oth._data) + 1];
		strcpy(this->_data, oth._data);

		this->_length = oth._length;
	}

	~String()
	{
		delete[] this->_data;
	}

	int getLength() {
		return this->_length;
	}

	const char* getSource() {
		return this->_data;
	}
};

void foo(int& x) {
	x = 2;
}

void boo(String str) { // pass by value (copy), pass by pointer, pass by ref
	
}


String zoo() {
	String x;
	return x;
}

void main() {
	/*int xx = 22;
	foo(xx);*/

	String hakuna = "hakuna";
	boo(hakuna);

	String zurna = zoo();
	//Book book("Harry Potter", 1999, 344, Genre::SciFi, "JK Rowling", 1960);
	//cout << book.getName() << endl;
	//cout << book.getAuthor()->getName() << endl;
	//book.setName("Harry Pottter");
	//cout << book.getName() << endl;

	// String a = "Hello World";

	
	//String a("salam");
	//cout << a.getLength() << endl;
	//cout << a.getSource() << endl;

	//String b = a; // copy constructor will be called

	// when copy constructor is called:
	/*
	1. When an object of the class is returned by value.
	2. When an object of the class is passed (to a function) by value as an argument.
	3. When an object is constructed based on another object of the same class.
	4. When the compiler generates a temporary object.
	*/

	// shallow copy
	// deep copy
	//cout << &a << endl;
	//cout << &b << endl;

	//String aaa, bbb;
	//aaa = bbb;					// no copy constructor will be called

	//cout << "Heyyyyyyyyy\n";
}