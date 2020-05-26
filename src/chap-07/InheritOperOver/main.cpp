// 347p 파생 클래스의 연산자 다중 정의

#include <iostream>

using namespace std;

class MyData 
{
public:
	MyData(int data) : _data(data) {}

	MyData operator+(const MyData& rhs) 
	{
		return MyData(_data + rhs._data);
	}

	MyData& operator=(const MyData& rhs)
	{
		_data = rhs._data;
		return *this; 
	}

	operator int() 
	{
		return _data; 
	}

protected:
	int _data = 0; 
};

class MyDataEx : public MyData 
{
public:
	MyDataEx(int data) : MyData(data) {}

	using MyData::operator+;
	using MyData::operator=;
};

int main()
{
	MyData a(3), b(4); 
	cout << a + b << endl;

	MyDataEx c(3), d(4), e(0);
	e = c + d; 
	cout << e << endl;

	return 0;
}