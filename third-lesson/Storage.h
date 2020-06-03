#include <iostream>
using namespace std;

class Storage {
private:
	int _capacity = 1000;
public:
	const static int _maxClient = 123;
	static int _clientCount;

	Storage();
	~Storage();

	static void Foo();
	void PrintCapacity();
};