#include <iostream>
#include "Vector.h"
using namespace std;

class Point;

class Rectangle
{
	int left, top, right, bottom;
public:
	Rectangle() = default;

	Rectangle(Point lt, Point rb);

	Rectangle& operator() (Point lt, Point rb);

	void print() const;
};

class Point
{
	int x, y;
public:
	Point() = default;

	Point(int x, int y) : x(x), y(y) { }

	friend Rectangle;
};

Rectangle::Rectangle(Point lt, Point rb)
{
	left = lt.x;
	top = lt.y;
	right = rb.x;
	bottom = rb.y;
}

Rectangle& Rectangle::operator()(Point lt, Point rb)
{
	left = lt.x;
	top = lt.y;
	right = rb.x;
	bottom = rb.y;
	return *this;
}

void Rectangle::print() const
{
	cout << "Left: " << left << endl;
	cout << "Top: " << top << endl;
	cout << "Right: " << right << endl;
	cout << "Bottom: " << bottom << endl;
}

// ================================== 1st part
class A
{
	int x = 5;
	int* z = new int[10];
public:
	// move constructor = optimization
	A() { cout << "---A created (by def ctor)---\n"; }

	A(const A& oth) // = default;
	{
		cout << "---A created (by copy ctor)---\n";
		x = oth.x;
	}

	A(A&& oth)
	{
		cout << "---Move ctor called---\n";
		this->z = oth.z;
		oth.z = nullptr;
	}
	
	~A()
	{
		cout << "---Destructor called---\n";
		delete[] this->z;
	}

	void setX(int x)
	{
		this->x = x;
	}
	
	explicit operator int() const
	{
		return this->x;
	}

	void print()
	{
		for (int i = 0; i< 10; i++)
		{
			cout << z[i] << ' ';
		}
		cout << endl;
	}
};

void foo(int a)
{
	cout << a << endl;
}

// Today's subjects:
// Move ctor
// Overloading(), ->, new and delete
// Operators which cannot be overloaded: . :: ?: sizeof
// Friend classes
// Implementation of vector class

A foo()
{
	A a;
	a.setX(2222);
	return a;
}

void main()
{
	int sdf[] = {2,3,7};
	
	Vector a;
	for (int i = 0; i < 3; i++)
		a.pushBack(sdf[i]);
	
	int arr[] = { 1, 2, 3 };
	Vector v(arr, 2);


	Vector gg(5, 10);

	gg.sort(false);
	
	// Vector v = {1,2,3}; ...
	
	
	//Point p1(2, 3);
	//Point p2(8, 6);
	//Rectangle rect(p1, p2);
	//
	//// A c = foo();
	//// Smart pointer, functor, lambda, template class
	//A a;
	//a.print();
	//A c = a;
	//c.print();
	//a.print();
	//
	/*
	 *
	 *	lvalue is an expression with a mem address
	 *	rvalue is an expression that does not have any mem address
	 *  
	 */

	a.getByIndex(5);
	a[5];
	a(5);
}