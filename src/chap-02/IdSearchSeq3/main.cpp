// 87p 네임스페이스와 전역 변수의 검색 우선권

#include <iostream>

using namespace std;

int data = 200;

namespace Test 
{
	int data = 100;

	void testFunc() 
	{
		cout << data << endl;
	}
}

int main()
{
	Test::testFunc();

	return 0;
}