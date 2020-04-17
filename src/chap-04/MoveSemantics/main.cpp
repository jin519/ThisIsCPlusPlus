// 221p 이동 생성자의 호출 시점 

#include <iostream>

using namespace std;

class TestData 
{
public:
	TestData() 
	{
		cout << "TestData()" << endl;
	}

	TestData(const TestData& src) : __data(src.__data)
	{
		cout << "TestData(const TestData&)" << endl;
	}

	TestData(TestData&& src) noexcept : __data(src.__data)
	{
		cout << "TestData(TestData&&)" << endl;
	} 

	~TestData() 
	{
		cout << "~TestData()" << endl;
	}

	TestData& operator=(const TestData& rhs) = default; 

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
};

TestData testFunc(int data) 
{
	cout << "*** testFunc(): begin ***" << endl;

	TestData a;
	a.setData(data);

	cout << "*** testFunc(): end ***" << endl;

	return a; 
}

int main()
{
	TestData b;

	cout << "*** before ***" << endl;

	b = testFunc(20);

	cout << "*** after ***" << endl;

	TestData c(b);

	return 0;
}