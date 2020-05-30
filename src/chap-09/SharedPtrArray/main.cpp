// 407p 배열로 대상을 삭제하는 removeTest() 함수

#include <iostream>

using namespace std;

class Test 
{
public:
	Test() 
	{
		cout << "Test()" << endl;
	}

	~Test() 
	{
		cout << "~Test()" << endl;
	}

	void testFunc() 
	{
		cout << "testFunc()" << endl;
	}
};

int main()
{
	cout << "*** begin ***" << endl;

	shared_ptr<Test[]> ptr(new Test[3]);

	cout << "*** end ***" << endl;

	return 0;
}