// 207p 형변환 연산자를 통한 자료형 반환

#include <iostream>

using namespace std;

class TestData
{
public:
	explicit TestData(const int data) : __data(data) {}

	operator int() 
	{
		return __data; 
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

int main()
{
	TestData a(10);
	cout << a.getData() << endl;

	cout << a << endl;
	cout << (int)a << endl;
	cout << static_cast<int>(a) << endl;

	return 0;
}