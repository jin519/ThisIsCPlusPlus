// 81p 네임스페이스를 포함한 다중 정의

#include <iostream>

using namespace std;

void testFunc() 
{
	cout << "::TestFunc()" << endl;
}

namespace Test 
{
	void testFunc()
	{
		cout << "Test::TestFunc()" << endl;
	}
}

namespace MyData
{
	void testFunc()
	{
		cout << "MyData::TestFunc()" << endl;
	}
}

int main()
{
	testFunc();
	::testFunc();
	Test::testFunc();
	MyData::testFunc();

	return 0;
}