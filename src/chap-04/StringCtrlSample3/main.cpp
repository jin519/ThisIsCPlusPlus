// 224p 실습 과제 5

#include "MyString.h"
#include <iostream>

using namespace std;

static MyString testFunc() 
{
	MyString strTest("TestFunc() return");
	cout << strTest << endl;

	return strTest;
}

int main() 
{
	testFunc();

	return 0;
}