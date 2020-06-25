#include <iostream>
#include "Vector.cpp"
using namespace std;

template <typename T>
T Minimum(T a, T b)
{
	cout << "simple called\n";
	return a < b ? a : b;
}

template <>
const char* Minimum<const char*>(const char* a, const char* b)
{
	cout << "charrr pointer\n";
	return strcmp(a, b) >= 0 ? a : b;
}

template <typename T>
class Test
{
	T* p;
public:
	Test(const T& value)
	{
		cout << "<T>\n";
		p = new T(value);
	}

	Test(const Test& obj); // copy
	~Test()
	{
		delete[] p;
	}
	void print();
};

template<typename T>
Test<T>::Test(const Test& obj)
{
	p = new T(*obj.p);
}

template <typename T> void Test<T>::print()
{
	cout << *p << endl;
}

// explicit (full) specialization of class
template<>
class Test<char>
{
	char* p;
public:
	Test(const char& value)
	{
		cout << "<char>\n";
		p = new char(value);
	}

	Test(const Test& obj); // copy
	~Test()
	{
		delete[] p;
	}
	void print();
};

Test<char>::Test(const Test& obj)
{
	p = new char(*obj.p);
}

void Test<char>::print()
{
	cout << *p << endl;
}


template <typename T1, typename T2>
class Maximum
{
	T1 a;
	T2 b;
public:
	Maximum(T1 a, T2 b) : a(a), b(b)
	{
		cout << "<T, T>\n";
	}
	
};

// full spec:
template <>
class Maximum<int, char>
{
	int a;
	char b;
public:
	Maximum(int a, char b) : a(a), b(b)
	{
		cout << "<int, char>\n";
	}
};

// partial specialization (only for class)
template <typename T>
class Maximum<T, char>
{
	T a;
	char b;
public:
	Maximum(T a, char b): a(a), b(b)
	{
		cout << "<T, char>\n";
	}
};

void main()
{
	/*cout << Minimum<double>(1.2, 3) << endl;
	cout << Minimum<float>(1.2, .5) << endl;
	cout << Minimum<int>(1, 0) << endl;

	//cout << Minimum<char>('a', 'z') << endl;
	cout << Minimum<const char*>("Windows", "iOS") << endl;*/


	//Test<int> a(5);
	//Test<double> b(1.1);
	//Test<char> c('c');

	Maximum<char, char> bb('b', 'b');
	Maximum<int, char> abb(1, 'b');
	Maximum<double, char> abz(1, 'b');
	Maximum<double, int> zabz(1, 'b');
}