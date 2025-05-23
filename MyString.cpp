#include "MyString.hpp"

using namespace std;

MyString::MyString() {
	data = new char[1];
	data[0] = '\0';
	length = 0;
}

MyString::MyString(const char* str) {
	length = strlen(str);
	data = new char[length + 1];
	strcpy_s(data, length + 1, str);
}

MyString::~MyString() {
	delete[] data;
}

MyString& MyString::operator=(const MyString& other) {
	if (this != &other) {
		delete[] data;

		length = other.length;
		data = new char[length + 1];
		strcpy_s(data, length + 1, other.data);
	}
	return *this;
}

const char* MyString::getCString() const {
	return data;
}

MyString::MyString(const MyString& other) {
	length = other.length;
	data = new char[length + 1];
	strcpy_s(data, length + 1, other.data);
}