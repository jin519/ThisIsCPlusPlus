// 181p 복사 생성자 선언 및 정의

#include <iostream>

using namespace std;

class MyData 
{
public:
	MyData() 
	{
		cout << "MyData()" << endl;
	}

	MyData(const MyData& src) : __data(src.__data)
	{
		cout << "MyData(const MyData&)" << endl;
	}

	int getData() 
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
	MyData a;
	a.setData(10);

	MyData b(a);
	cout << b.getData() << endl;

	return 0;
}