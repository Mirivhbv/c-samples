#include <iostream>
#include "Storage.h"
using namespace std;

Storage::Storage() {
	_clientCount++;
}

Storage::~Storage()
{
	_clientCount--;
}

void Storage::PrintCapacity() {
	cout << _capacity << endl;
}

// Static functions is possible to refer
// only and only static variable and functions
void Storage::Foo() {
	cout << "hello";
}

/*
A class is typically declared in a header file and a header file is typically included 
into many translation units. However, to avoid complicated linker rules, C++ requires that 
every object has a unique definition. That rule would be broken if 
C++ allowed in-class definition of entities that needed to be stored in memory as objects.
*/

// must be here
// static inits
int Storage::_clientCount = 0;