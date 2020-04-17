// 201p 실습 과제 4

#include "MyString.h"
#include <iostream>

using namespace std;

static void testFunc(const MyString& src) 
{
	cout << src << endl;
}

int main() 
{
	MyString strData("Hello");

	::testFunc(strData);
	::testFunc(MyString("World"));

	return 0;
}