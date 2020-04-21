// 248p += 연산자 함수 추가

#include <iostream>

using namespace std;

class MyData
{
public:
	MyData(const int data)
	{
		__pData = new int(data);
	}

	~MyData()
	{
		delete __pData;
	}

	operator int()
	{
		return *__pData;
	}

	MyData& operator=(const MyData& rhs)
	{
		if (this == &rhs)
			return *this;

		delete __pData;
		__pData = new int(*rhs.__pData);

		return *this;
	}

	MyData& operator+=(const MyData& rhs) 
	{
		int* pData = new int(*__pData);
		*pData += *(rhs.__pData);

		delete __pData;
		__pData = pData;

		return *this;
	}

private:
	int* __pData = nullptr;
};

int main()
{
	MyData a(0), b(5), c(10);

	a += b; 
	a += c;

	cout << a << endl;

	return 0;
}