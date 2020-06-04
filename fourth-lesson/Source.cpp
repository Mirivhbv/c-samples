#include <iostream>
using namespace std;

class Fraction {
private:
	int numerator; // suret 
	int denominator; // mexrec

public:
	Fraction(int numerator, int denominator)
	{
		this->numerator = numerator;
		this->denominator = denominator;
	}

	Fraction Multiply(const Fraction& other) {
		
	}

	static void Foo(const Fraction& thiss, int a) {
		thiss.denominator;
		cout << a << endl;
	}
};

// this pointer
// composition & aggregation
class Author { // jkrowling
public:
	char* _name;
	int _age = 5;
	Author()
	{
		cout << "Called Author\n";
	}

	Author(const char* name, int age)
	{
	}

	void DisplayThis() {
		cout << this << endl;
	}

	// void generateNewBook();
};

class Book {
public:
	char* _name; // harry potter
	Author* _author;

	Book(const char* name, Author* thor)
	{
		_name = new char[55];
		_author = thor;
		cout << "Called Book\n";
	}
};

void main() {
	Fraction fr(1, 5);
	Fraction* frr = new Fraction(5, 6);
	
	// fr.Multiply();

	Author ann("JK Rowling", 55); // #Fff1
	cout << &ann << endl;
	ann.DisplayThis();
	Author an1("JK Rowling", 55); // #Fff1

	Book b("Harry Potter and blabla", &ann);


}