// 283p 메서드 재정의 기본

#include <iostream>

using namespace std;

class MyData
{
public:
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

class MyDataEx : public MyData
{
public:
	void setData(const int data) 
	{
		if (data < 0)
			MyData::setData(0);

		if (data > 10)
			MyData::setData(10);
	}
};

int main()
{
	MyData a;

	a.setData(-10);
	cout << a.getData() << endl;


	MyDataEx b;

	b.setData(15);
	cout << b.getData() << endl;

	return 0;
}