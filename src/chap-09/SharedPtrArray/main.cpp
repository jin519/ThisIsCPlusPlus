// 407p �迭�� ����� �����ϴ� removeTest() �Լ�

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