#ifndef MYSTRING_HPP
#define MYSTRING_HPP

#include<iostream>
#include<cstring>

class MyString {
private:
	char* data;
	size_t length;

public:
	MyString();
	MyString(const char* str);
	~MyString();
	MyString(const MyString& other);
	MyString& operator = (const MyString& other);
	const char* getCString() const;
};

#endif
