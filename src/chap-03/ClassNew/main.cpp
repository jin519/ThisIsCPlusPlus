// 125p new�� delete ������ ���

#include <iostream>

using namespace std;

class Test
{
public:
	Test() 
	{
		cout << "Test::Test()" << endl;
	}

	~Test()
	{
		cout << "Test::~Test() " << endl;
	}
};

int main()
{
	cout << "begin" << endl;

	Test* pTest = new Test();
	cout << "test" << endl;
	delete pTest;
	
	cout << "end" << endl;

	return 0;
}