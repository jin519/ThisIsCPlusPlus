// 244p 대입 연산자 다중 정의

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

	void operator=(const MyData& rhs) 
	{
		delete __pData;
		__pData = new int(*rhs.__pData);
	}

private:
	int* __pData = nullptr;
};

int main()
{
	MyData a(0), b(5);
	
	a = b;
	cout << a << endl;

	return 0;
}