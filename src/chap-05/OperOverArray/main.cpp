// 253p 배열 연산자

#include <iostream>

using namespace std;

class IntArray 
{
public:
	explicit IntArray(const int size) 
	{
		__pBuffer = new int[size] { 0 };
		__size = size;
	}

	~IntArray() 
	{
		delete __pBuffer;
		__pBuffer = nullptr;
	}

	int operator[](const int index) const 
	{
		cout << "operator[] const" << endl;
		return __pBuffer[index];
	}

	int& operator[](const int index) 
	{
		cout << "operator[]" << endl;
		return __pBuffer[index];
	}

private:
	int* __pBuffer = nullptr;
	int __size = 0;
};

void testFunc(const IntArray& arr) 
{
	cout << "testFunc()" << endl;
	cout << arr[3] << endl;
}

int main() 
{
	IntArray arr(5);

	for (int i = 0; i < 5; ++i)
		arr[i] = (i * 10);

	testFunc(arr);

	return 0;
}