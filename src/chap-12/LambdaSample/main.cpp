// 498p 람다식 기본

#include <iostream>

using namespace std;

int testFunc(int param) 
{
	cout << "function pointer: " << param << endl;
	return param; 
}

int main()
{
	auto func = [](int param) -> int
	{
		cout << "lambda: " << param << endl;
		return param;
	};

	func(5);

	auto pTest = testFunc;
	pTest(10);

	return 0;
}