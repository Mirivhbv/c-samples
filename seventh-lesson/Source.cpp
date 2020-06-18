#include <iostream>
#include "String.h"
using namespace std;

class Fraction {
	// todo
};

// operator overloading
class Cents
{
private:
	int _cents;
public:
	
	// default & delete c++11 

	Cents(int cents) { _cents = cents; }
	int getCents() const { return _cents; }
	Cents add(const Cents& b) {
		return Cents(this->_cents + b._cents);
	}

	Cents multiply(const Cents& b) {
		return Cents(this->_cents * b._cents);
	}

	// the member function way
	Cents operator+(const Cents& b) {
		return Cents(this->_cents + b._cents);
	}

	Cents operator*(const Cents& b) {
		return Cents(this->_cents * b._cents);
	}

	// unary, binary, ternary
	// ++, --   prefix postfix

	// prefix
	Cents operator++() {
		Cents temp(0);
		temp._cents = ++this->_cents;
		return temp;
	}

	Cents operator++(int) {
		Cents temp(0);
		temp._cents = this->_cents++;
		return temp;
	}

	Cents operator--() {
		Cents temp(0);
		temp._cents = --this->_cents;
		return temp;
	}

	Cents operator--(int) { // postfix
		Cents temp(0);
		temp._cents = this->_cents--;
		return temp;
	}

	// return by references
	Cents& operator=(const Cents& cent) {
		// note:: self!!!!!!!!!!!!!
		cout << "Assignment op called\n";
		this->_cents = cent._cents;
		return *this;
		// return Cents(this->_cents);
	}

	Cents& operator+=(const Cents& cent) {
		this->_cents += cent._cents;
		return *this;
	}

	Cents& operator-=(const Cents& cent) {
		this->_cents += cent._cents;
		return *this;
	}

	bool operator==(const Cents& cent) {
		return this->_cents == cent._cents;
	}

	bool operator>(const Cents& cent) {
		return this->_cents > cent._cents;
	}

	bool operator<(const Cents& cent) {
		return this->_cents < cent._cents;
	}

	bool operator!=(const Cents& cent) {
		return this->_cents != cent._cents;
	}
};

// Fraction +,-,*, -;

//Cents add(const Cents& a, const Cents& b) {
//	Cents c(a.getCents() + b.getCents());
//	return c;
//}

int foo(A z) {

}

class A {
public:
	// special member functional
	// A() = default;
	// A() = delete;
	// A(const A& r) = default; // shallow copy

	A(int a) {

	}
	 
	A(const A& r) = delete;
	A& operator=(const A& a) = delete;
};

void main() {
	//A a = 2;
	//A b(3);
	//A x = a;

	//// shallow copy		vs deep copy
	//a = b;
	//b = a;

	//A asd[22];


	//int a, b;
	//a = b = 4;
	//a -= b; //
	


	//Cents aa = 25;
	//Cents bb = 25;
	//Cents asd = 33;
	//aa -= bb; // ??



	//aa = bb = asd;
	//aa.operator*(bb);

	//cout << (aa == bb)	<< endl;
	//cout << (aa > bb)	<< endl;
	//cout << (aa < bb)	<< endl;
	//cout << (aa != bb)	<< endl;

	/*if (aa == bb) {
		cout << "EQUALLL\n";
	}
	else {
		cout << "Not equal \n";
	}*/

	//// 1st case : +=
	//Cents b1 = 25;
	//Cents b2 = 1000;  // copy constructor
	//Cents b3 = 123;  // copy constructor
	//(b1 += b2) = b3;
	//cout << b1.getCents() << endl;

	//int a = 1, b = 2, c = 3;
	//(a += b) = c;
	//cout << a << endl;

	// 2nd case:
	/*Cents a1 = 100;
	Cents a2 = 200;
	Cents a3 = 300;
	(a1 = a2) = a3;
	cout << a1.getCents() << endl;*/

	//Cents b3 = 123;  // copy constructor
	////cout << b2.getCents() << endl;
	////b2 = b1;		  // assignment operator ~|-/-\-|~
	////cout << b2.getCents() << endl;

	//b2 = b3 = b1;

	//int a, b, c;
	//a = b = c = 5;

	//cout << b1.getCents() << endl;
	//cout << b2.getCents() << endl;
	//cout << b3.getCents() << endl;
	//int a = 2; // built-in
	//int b = 3;
	//int g = a + b;

	//Cents a(50); // custom type
	//Cents b(25);
	//Cents aaa = b++;
	//b++;
	//Cents fff = a + (++b);
	//cout << fff.getCents() << endl;
	//cout << b.getCents() << endl;

	//cout << a.getCents() << endl;
	//cout << a.getCents() << endl;

	////Cents c = a.add(b); // 75
	//Cents g = a * b;
	//Cents g = a + b;
	//cout << c.getCents() << endl;

	String a = "salam";
	String b = "sasa";

	// a();
}