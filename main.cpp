#include <iostream>
#include "MyString.hpp"

using namespace std;

int main() {

	MyString s1("Hello");
	cout << "MyString is: " << s1.getCString() << endl;


	MyString a("Hello");
	MyString b;
	MyString c("World");
	c = a;

	cout << "a: " << a.getCString() << endl;
	cout << "b: " << a.getCString() << endl;
	cout << "c: " << a.getCString() << endl;
	
	return 0;
}