// 142p 실습 과제 1

#include "MyString.h"
#include <iostream>

using namespace std;

int main() 
{
	MyString str1;
	str1.setString("Hello");
	cout << str1.getString() << endl;

	MyString str2;
	str2.setString("World!");
	cout << str2.getString() << endl;

	return 0;
}