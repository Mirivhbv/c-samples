#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "String.h"
using namespace std;

String::String() : _data(nullptr), _length(0) { }

String::String(const char* data) {
	this->_data = new char[strlen(data) + 1];
	strcpy(this->_data, data);
	this->_length = strlen(data);
}

// copy constructor syntax
String::String(const String& oth) {
	this->_data = new char[_length + 1];
	strcpy(this->_data, oth._data);
	this->_length = oth._length;
}

String::~String()
{
	delete[] this->_data;
}

int String::length() {
	return this->_length;
}

const char* String::c_str() {
	return this->_data;
}

void String::append(const String& str) {
	char* temp = this->_data;
	int newLength = this->_length + strlen(str._data) + 1;
	this->_data = new char[newLength];
	strncpy(this->_data, temp, this->_length);
	strncpy(this->_data + this->_length, str._data, str._length);
	this->_data[newLength - 1] = '\0';
	delete[] temp;
	this->_length = newLength - 1;
}

void String::removeAt(int index) {
	// TODO: implement it
}

String& String::operator=(const String& str) {
	if (this != &str) {
		if (this->_data != nullptr)
			delete[] this->_data;

		this->_data = new char[str._length + 1];
		strcpy(this->_data, str._data);
		this->_length = str._length;
		return *this;
	}

	return *this;
}



// <, >, == -- boolean