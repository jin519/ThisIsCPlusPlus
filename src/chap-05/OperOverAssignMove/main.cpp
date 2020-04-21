// 249p 

#include <iostream>

using namespace std;

class MyData
{
public:
	explicit MyData(const int data)
	{
		cout << "MyData(int)" << endl;
		__pData = new int(data);
	}

	MyData(const MyData& src) 
	{
		cout << "MyData(const MyData&)" << endl;
		__pData = new int(*src.__pData);
	}

	~MyData()
	{
		delete __pData;
	}

	operator int()
	{
		return *__pData;
	}

	MyData operator+(const MyData& rhs) 
	{
		return MyData(*__pData + *rhs.__pData);
	}

	MyData& operator=(const MyData& rhs) 
	{
		cout << "operator=" << endl;

		if (this == &rhs)
			return *this;

		delete __pData;
		__pData = new int(*rhs.__pData);

		return *this;
	}

	MyData& operator=(MyData&& rhs) noexcept
	{
		cout << "operator=(Move)" << endl;

		__pData = rhs.__pData;
		rhs.__pData = nullptr;

		return *this;
	}

private:
	int* __pData = nullptr;
};

int main()
{
	MyData a(0), b(3), c(4);

	cout << "*** before ***" << endl;
	a = (b + c);
	cout << "*** after ***" << endl;
	
	cout << a << endl;
	a = b;
	cout << a << endl;

	return 0;
}