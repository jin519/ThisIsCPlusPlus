// 192p 포인터가 존재했을 때의 얕은 복사

#include <iostream>

using namespace std;

class MyData
{
public:
	MyData(const int data)
	{
		__pData = new int;
		*__pData = data; 
	}

	int getData() const
	{
		if (__pData)
			return *__pData;

		return 0;
	}

private:
	int* __pData = nullptr;
};

int main()
{
	MyData a(10);
	MyData b(a);

	cout << a.getData() << endl;
	cout << b.getData() << endl;

	return 0;
}