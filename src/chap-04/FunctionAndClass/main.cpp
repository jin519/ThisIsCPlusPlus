// 183p 매개변수로 사용되는 복사 생성자

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

void testFunc(TestData rhs) 
{
	cout << "testFunc()" << endl;
	rhs.setData(20);
}

int main()
{
	cout << "*** begin ***" << endl;

	TestData a(10);
	testFunc(a);

	cout << "a: " << a.getData() << endl;
	cout << "*** end ***" << endl;

	return 0;
}