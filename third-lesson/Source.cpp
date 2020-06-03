#include <iostream>
#include "Storage.h"
using namespace std;

void foo() {
	Storage a[5];
	cout << Storage::_clientCount << endl;
}

void main() {
	Storage a;
	Storage s1[5];
	cout << Storage::_clientCount << endl;
	foo();
	cout << Storage::_clientCount << endl;
	s1[0].PrintCapacity();
	Storage::Foo();
}