// 255p �ǽ� ���� 7: ���ڿ��� �迭�̴�

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