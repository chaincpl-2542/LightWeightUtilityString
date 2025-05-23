#include <iostream>
#include <cassert>
#include "MyString.hpp"

using namespace std;

int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	/*
	MyString s1("Hello");
	cout << "MyString is: " << s1.getCString() << endl;
	*/

	MyString a("Good");
	MyString b;
	MyString c("Boy");
	c = a;

	cout << "a: " << a.getCString() << endl;
	cout << "b: " << a.getCString() << endl;
	cout << "c: " << a.getCString() << endl;
	
	//Get character position
	/*
	MyString s("Hello");

	cout << "charAt(1): " << s.charAt(1) << endl;
	cout << "operator : " << s[4] << endl;

	try {
		cout << "charAt(10): " << s.charAt(10) << endl;
	}
	catch (const exception& ex) {
		cout << "Caught exception: " << ex.what() << endl;
	}
	*/

	//Operator Oveload
	/*
	MyString a("MyText");
	MyString b("MyText");
	MyString c("MyTextTest");

	cout << "a == b: " << (a == b) << endl;
	cout << "a == c: " << (a == c) << endl;
	cout << "a != c: " << (a != c) << endl;
	cout << "equals: " << a.equals(b) << endl;
	cout << "a == a: " << (a == a) << endl;
	cout << "a.equals(c): " << a.equals(c) << endl;
	*/
	
	/*
    MyString a("Hello");
    MyString b("World");
    MyString c = a + b;

    cout << "Final: " << c.getCString() << endl;
    cout << "Length: " << c.getLength() << endl;
	*/

	/*
	MyString s("HelloSubString");
	MyString sub = s.substring(5, 10);

	cout << "Original: " << s.getCString() << endl;
	cout << "Substring: " << sub.getCString() << endl;
	*/

	/*
	MyString s("SubString");
	MyString sub = s.substring(0, 4);

	cout << "Full: " << s << endl;
	cout << "Sub : " << sub << endl;
	*/

	assert(_CrtCheckMemory());
    _CrtDumpMemoryLeaks();

    return 0;
}