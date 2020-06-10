#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

// custom type = user defined type
// String b;
// cout;
class String {
	char* _data;
	int   _length;
public:
	String() : _data(nullptr), _length(0) {
	}

	String(const char* data) {
		this->_data = new char[strlen(data) + 1];
		strcpy(this->_data, data);
		this->_length = strlen(data);
	}

	// copy constructor syntax
	String(const String& oth) {
		this->_data = new char[strlen(oth._data) + 1];
		strcpy(this->_data, oth._data);
		this->_length = oth._length;
	}

	~String()
	{
		delete[] this->_data;
	}

	int length() {
		return this->_length;
	}

	const char* c_str() {
		return this->_data;
	}
	 
	void append(const char* data) {
		char* temp = this->_data;
		// strlen("sagol") + strlen(" netersen") + 1
		int newLength = this->_length + strlen(data) + 1;
		this->_data = new char[newLength];
		// _data = new char[strlen(this->_data) + strlen(data) + 1]; // same as above
		strncpy(this->_data, temp, this->_length); // or as below
		/*for (size_t i = 0; i < this->_length; i++)
		{
			this->_data[i] = temp[i];
		}*/
		strncpy(this->_data + this->_length, data, strlen(data)); // or as below
		/*for (int i = this->_length, j = 0; i < newLength - 1; i++, j++)
		{
			this->_data[i] = data[j];
		}*/
		this->_data[newLength - 1] = '\0';
		delete[] temp;
		this->_length = newLength - 1;
	}

	void removeAt(int index) {
		// TODO: implement it
	}
};

void main() {
	string abc = "one two";
	cout << abc << endl;
	cout << abc.c_str() << endl;
	// abc.erase(0, 2);
	cout << abc.c_str() << endl;
	cout << abc.at(2) << endl;

	String c = "sagol";
	c.removeAt(1);
	cout << c.c_str() << endl; // sgol
	//c.append(" netersen");
	//cout << c.getData() << endl;
	//c.append("  yaxshi ol");
	//cout << c.getData() << endl;
	//c.append("  zzzzz");
	//cout << c.getData() << endl;

	c.removeAt(0);
}