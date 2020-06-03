#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//#include "Car.h"
//using namespace std;
//
//class Student {
//private:
//	int _age;
//	int _graduationYear;
//	Car* _car;
//public:
//	// member list init
//	Student() : _age(0), _graduationYear(0) { /* default ctor */ }
//
//	// ctor with params
//	// ctor delegation
//	explicit Student(int age) : Student(age, 0) { }
//
//	~Student() {
//		delete _car;
//	}
//
//	Student(int age, int graduationYear) {
//		_age = age;
//		_graduationYear = graduationYear;
//	}
//
//	void PrintAge() {
//		cout << "AAA\n";
//	}
//
//	int getAge() {
//		return _age;
//	}
//
//	void setAge(int age) {
//		if (age > 5) {
//			_age = age;
//		}
//		else {
//			cout << "Re-input correctly...";
//			_age = 0;
//		}
//	}
//};
//
//void foo(Student a) {
//
//}
//
//void main() {
//	/*
//	Student a(2);  // object is instance of the class
//	Student a2;    // object is instance of the class
//	Student a3(15, 2021);    // object is instance of the class
//
//	// a.setAge();
//	// a.setAge(5);
//	// a.setGradYear(2020);
//
//	cout << a.getAge() << endl;
//	cout << a2.getAge() << endl;
//	*/
//
//	// 2nd part on
//
//
//	Student a(15);
//	/*
//		foo(a);
//	*/
//
//	Student aa{ 15,25 };
//	Student aaa[100];
//
//	Student* a = new Student();
//
//	Car car(2011, 2500, 260, "BMW");
//	car.printModel();
//}