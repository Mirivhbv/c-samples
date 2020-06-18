#include <iostream>
using namespace std;

class Integer {
	int _integer;
public:
	Integer(int integer)
	{
		this->_integer = integer;
	}

	Integer operator+(const Integer& oth) {
		return Integer(this->_integer + oth._integer);
	}

	int getInteger() const {
		return this->_integer;
	}
};

class Float {
	float _float;
public:
	Float(float fl) {
		this->_float = fl;
	}

	float getFloat() const {
		return this->_float;
	}

	Float operator*(const Integer&) = delete;

	/*Float operator+(float fl) {
		return Float(this->_float + fl);
	}*/

	// binary operator friend overload
	friend void foo(Float& f); // C++

	friend Float operator+(const Float& left, float right);
	friend Float operator+(float right, const Float& left);
	//friend ostream& operator<<(ostream& os, const Float& f);

	ostream& operator<<(ostream& os) {
		os << this->_float;
		return os;
	}

	void operator<<(int a) {

	}

	void operator<<(const char* a) {

	}

	void print() {

	}
};

// friend function
void foo(Float& f) {
	f._float;
}

// global function way
//Integer operator*(const Integer& left, const Integer& right) {
//	return Integer(left.getInteger() * right.getInteger());
//}
//
//Float operator*(const Float& left, const Integer& right) {
//	return Float(left.getFloat() * right.getInteger());
//}

string operator*(const string& str, int a) {
	string emp;
	if (a > 0) {
		for (int i = 0; i < a; i++)
		{
			emp += str;
		}
	}
	return emp;
}

Float operator+(const Float& a, float b) {
	return Float(a._float + b);
}

Float operator+(float b, const Float& a) {
	return Float(a._float + b);
}

//
//ostream& operator<<(ostream& os, const Float& f) {
//	os << f._float;
//	return os;
//}

void main() {
	/*Float ff = 2.2;
	foo(ff);*/

	/*
		It turns out that there are three different ways to overload operators:
		the member function way, the friend function way, and the normal function way aka global function.
	*/
	//Integer a = 5;
	//Integer b = 10;

	//Integer c = a + b;
	//Integer e = a * b;

	//Float hh = 1.5;
	//// Float cc = hh * c;

	//string az = "salam";
	//string bbb = az * 5;

	//cout << bbb << endl;

	Float hh = 2.4;
	/*cout << hh << 2 <<  " dsdf " << endl;
	cout << hh;

	cout << hh << "sad";*/
	hh << cout << 2.2;
	//Float ff = hh + 2.6;

	//cout << ff.getFloat() << endl;

	//hh << "salam";

	//ff = 2.5 + hh;
	//int bb = 22;
	//
	//hh.print();   // 
//	cout << bb;

	/*cout << c.getInteger() << endl;
	cout << e.getInteger() << endl;*/

	// [], (), conversion and explicit for conversion
	// 
	
}