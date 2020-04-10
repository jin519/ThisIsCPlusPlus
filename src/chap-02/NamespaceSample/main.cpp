// 75p 네임스페이스 선언 및 정의

#include <iostream>

using namespace std;

namespace Test 
{
	int data = 100;

	void testFunc() 
	{
		cout << "Test::TestFunc()" << endl;
	}
}

int main()
{
	Test::testFunc();
	cout << Test::data << endl;

	return 0;
}