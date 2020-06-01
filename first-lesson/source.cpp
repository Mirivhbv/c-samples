#include <iostream>
using namespace std;

class Student {
	// encapsulation:
private:
	// state:
	// access specifiers
	int _age; // members, fields
	int _ageGetCounter;

public:
	int graduationYear;

	// member function --> method
	void PrintAge() {
		cout << _age << endl;
	}

	// main: getter & setter
	// accessor == inspector -- getter
	// modifier == mutator   -- setter

	// getter method
	int getAge() {
		_ageGetCounter++;

		return _age;
	}

	// setter
	void setAge(int age) {
		if (age > 5) {
			_age = age;
		}
		else {
			cout << "Re-input correctly...";
			_age = 0;
		}
	}
};

void main() {
	Student a; // object is instance of the class	

	/*
	a._age = -15;
	cout << a._age << endl;
	*/

	a.setAge(-15);
	//a._ageGetCounter = 1888;

	cout << a.getAge() << endl;

}