// 255p 실습 과제 7: 문자열은 배열이다

#include "MyString.h"
#include <iostream>

using namespace std;

void testFunc(const MyString& str) 
{
	cout << str[0] << endl;
	cout << str[str.getLength() - 1] << endl;
}

int main() 
{
	MyString str("HelloWorld");
	
	cout << str << endl;
	testFunc(str); 

	return 0;
}