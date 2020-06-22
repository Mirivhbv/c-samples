#pragma once
#include <iostream>
#include <String.h>
using namespace std;

void print(int *arr, int size)
{
}

int arr[] = { 1,23,4 };

// c++ style array
class Vector
{
private:
	int* data = nullptr;
	int size = 0;
public:
	int getSize() const;
	int* getData() const;

	Vector() = default;
	Vector(int* ptr, int size);
	Vector(int size, int value);

	// Just sample for future
	// Vector asd = { 1,3,5,6 };
	// Vector(std::initializer_list<int> init);

	// All constructors (+1 move ctor)
	// Destructor

	// Vector& operator=(const Vector& other);
	int getByIndex(int index);
	int operator[](int index);
	int operator()(int index);
	void print();
	void pushBack(int value);
	void pushFront(int value);
	void pop(int index);
	int search(int value); // in case of absence return -1
	void sort(bool asc = true);
};
