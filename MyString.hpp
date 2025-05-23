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
	MyString(const MyString& other);
	~MyString();
	MyString& operator = (const MyString& other);

	size_t getLength() const;
	const char* getCString() const;
	
	char charAt(size_t index)const;
	char operator[](size_t index)const;

	bool equals(const MyString& other) const;
	bool operator==(const MyString& other) const;
	bool operator!=(const MyString& other) const;

	MyString operator+(const MyString& other) const;

	MyString substring(size_t start, size_t end) const;

	friend std::ostream& operator<<(std::ostream& os, const MyString& str);
};

#endif
