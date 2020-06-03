#include "Car.h"
#include <iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

Car::Car(int year, int engine, int speed, const char* manufacturer) : _year(year), _engine(engine), _speed(speed) {
	int length = strlen(manufacturer) + 1;
	_manufacturer = new char[length];
	//strcpy(_manufacturer, manufacturer);
}

Car::~Car() {
	delete[] _manufacturer;
}

void Car::move() {
	cout << "Moving\n";
}

void Car::printModel() {
	cout << _manufacturer << endl;
}