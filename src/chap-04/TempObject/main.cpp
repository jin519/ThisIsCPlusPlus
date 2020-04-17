// 211p 이름 없는 임시 객체의 생성과 소멸

#include <iostream>

using namespace std;

class TestData
{
public:
	TestData(int data, const char* name) : __data(data), __name(name)
	{
		cout << "TestData(int): " << __name << endl;
	}

	TestData(const TestData& src) : __data(src.__data), __name(src.__name)
	{
		cout << "TestData(const TestData&): " << __name << endl;
	}

	~TestData() 
	{
		cout << "~TestData(): " << __name << endl;
	}

	TestData& operator=(const TestData& rhs) 
	{
		cout << "operator=" << endl;
		__data = rhs.__data;

		return *this; 
	}

	int getData() const
	{
		return __data;
	}

	void setData(int data)
	{
		__data = data;
	}

private:
	int __data = 0;
	const char* __name = nullptr;
};

TestData testFunc(int data) 
{
	TestData a(data, "a"); 

	return a; 
}

int main()
{
	TestData b(5, "b");

	cout << "*** before ***" << endl;
	b = testFunc(10);
	cout << "*** after ***" << endl;

	cout << b.getData() << endl;

	return 0;
}