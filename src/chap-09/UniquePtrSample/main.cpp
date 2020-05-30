// 409p 한 포인터로만 포인팅하는 unique_ptr

#include <iostream>
#include <memory>

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
	unique_ptr<Test> ptr1(new Test());

	// unique_ptr<Test> ptr2(ptr1);
	// ptr2 = ptr1;

	return 0;
}