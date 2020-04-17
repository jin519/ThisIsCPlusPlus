// 219p 다중 정의의 모호성 

#include <iostream>

using namespace std;

void testFunc(int& value)
{
	cout << "testFunc(int&)" << endl;
}

void testFunc(int&& value)
{
	cout << "testFunc(int&&)" << endl;
}

void testFunc(int value) 
{
	cout << "testFunc(int)" << endl;
}

int main()
{
	//testFunc(3 + 4);

	return 0;
}