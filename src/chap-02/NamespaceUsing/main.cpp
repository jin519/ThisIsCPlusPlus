// 77p using ¼±¾ð

#include <iostream>

using namespace std;

namespace Test 
{
	int gData = 100;

	void testFunc() 
	{
		cout << "Test::testFunc()" << endl;
	}
}

using namespace Test; 

int main()
{
	testFunc();
	cout << gData << endl;

	return 0;
}