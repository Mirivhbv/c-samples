#pragma once
class String {
	char* _data;
	int   _length;
public:
	String();
	String(const char* data);
	String(const String& oth);
	~String();
	int length();
	const char* c_str();
	void append(const String& str);
	void removeAt(int index);
	String& operator=(const String& str);
	bool operator==(const String& str);
	String& operator+=(const String& str); // concat
};