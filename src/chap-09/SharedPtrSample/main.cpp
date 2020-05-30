// 404p 포인팅 횟수를 계산하는 shared_ptr

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
	cout << "*** begin ***" << endl;
	
	shared_ptr<Test> ptr1(new Test);
	cout << "counter: " << ptr1.use_count() << endl;

	{
		shared_ptr<Test> ptr2(ptr1);

		cout << "counter: " << ptr1.use_count() << endl;
		ptr2->testFunc(); 
	}

	cout << "counter: " << ptr1.use_count() << endl;
	ptr1->testFunc(); 

	cout << "*** end ***" << endl;

	return 0;
}