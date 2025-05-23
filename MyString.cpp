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

char MyString::charAt(size_t index)const {
	if (index >= length) {
		throw out_of_range("Index out of bounds");
	}
	return data[index];
}

char MyString::operator[](size_t index) const{
	return data[index];
}

bool MyString::equals(const MyString& other) const {
	if (length != other.length) return false;
	return strcmp(data, other.data) == 0;
}

bool MyString::operator==(const MyString& other) const {
	return this->equals(other);
}

bool MyString::operator!=(const MyString& other) const {
	return !(*this == other);
}

size_t MyString::getLength() const {
	return length;
}

MyString MyString::operator+(const MyString& other) const {
	size_t newLength = length + other.length;
	char* newData = new char[newLength + 1];

	strcpy_s(newData, newLength + 1, data);
	strcat_s(newData, newLength + 1, other.data);

	MyString result(newData);
	delete[] newData;
	return result;
}

MyString MyString::substring(size_t start, size_t end) const {
	if (start > end || end > length) {
		throw out_of_range("Invalid range in substring()");
	}

	size_t newLen = end - start;
	char* newData = new char[newLen + 1];
	strncpy_s(newData, newLen + 1, data + start, newLen);
	newData[newLen] = '\0';

	MyString result(newData);
	delete[] newData;
	return result;
}

ostream& operator<<(ostream& os, const MyString& str) {
	os << str.data;
	return os;
}
