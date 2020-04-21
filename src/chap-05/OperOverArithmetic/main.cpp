// 236p 연산자 다중 정의와 이동 생성자 호출 시점

#include <iostream>

using namespace std;

class MyData 
{
public:
	MyData(int data) : __data(data)
	{
		cout << "MyData(int)" << endl;
	}

	MyData(const MyData& src) : __data(src.__data) 
	{
		cout << "MyData(const MyData&)" << endl;
	}

	MyData(MyData&& src) noexcept : __data(src.__data)
	{
		cout << "MyData(MyData&& src)" << endl;
	}

	operator int() 
	{
		return __data;
	}

	MyData operator+(const MyData& rhs) 
	{
		cout << "operator+" << endl;

		MyData retVal(0);
		retVal.__data = (__data + rhs.__data);

		return retVal;
	}

	MyData& operator=(const MyData& rhs) 
	{
		cout << "operator=" << endl;

		__data += rhs.__data;

		return *this; 
	}

private:
	int __data;
};

int main() 
{
	cout << "*** begin ***" << endl;

	MyData a(0), b(3), c(4);

	a = (b + c); 
	cout << a << endl;

	cout << "*** end ***" << endl;

	return 0;
}