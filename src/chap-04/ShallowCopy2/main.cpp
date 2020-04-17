// 199p 올바르게 복사 생성자를 사용하는 예제

#include <iostream>

using namespace std;

class MyData
{
public:
	MyData(const int data)
	{
		__malloc();
		*__pData = data;
	}

	MyData(const MyData& src)
	{
		cout << "MyData(const MyData&)" << endl;
		__copy(src);
	}

	~MyData() 
	{
		__free();
	}

	MyData& operator=(const MyData& rhs) 
	{
		if (this == &rhs)
			return *this;
		
		if (__pData)
			__free();

		__copy(rhs);

		return *this;
	}

	int getData() const
	{
		if (__pData)
			return *__pData;

		return 0;
	}

private:
	void __malloc() 
	{
		__pData = new int;
	}

	void __free() 
	{
		delete __pData;
		__pData = nullptr;
	}

	void __copy(const MyData& src) 
	{
		__malloc();
		*__pData = *src.__pData;
	}

	int* __pData = nullptr;
};

int main()
{
	MyData a(10);
	MyData b(20);

	a = b;

	cout << a.getData() << endl;

	return 0;
}