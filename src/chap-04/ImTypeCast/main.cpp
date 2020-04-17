// 203p int 자료형의 변환 생성자

#include <iostream>

using namespace std;

class TestData 
{
public:
	TestData(const int data) : __data(data) 
	{
		cout << "TestData(int)" << endl;
	}

	TestData(const TestData& src) : __data(src.__data)
	{
		cout << "TestData(const TestData&)" << endl;
	}

	~TestData() 
	{
		cout << "~TestData()" << endl;
	}

	int getData() const 
	{
		return __data; 
	}

	void setData(const int data) 
	{
		__data = data; 
	}

private:
	int __data = 0;
};

void testFunc(const TestData& src) 
{
	cout << "testFunc(): " << src.getData() << endl;
}

int main()
{
	cout << "*** begin ***" << endl;

	testFunc(5);
	
	cout << "*** end ***" << endl;

	return 0;
}