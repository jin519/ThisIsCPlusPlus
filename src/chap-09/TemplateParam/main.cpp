// 391p 함수처럼 선언해 사용하는 템플릿 매개변수

#include <iostream>

using namespace std;

template <typename T, int size>
class MyArray 
{
public:
	MyArray() 
	{
		__pData = new T[size]; 
	}

	~MyArray() 
	{
		delete[] __pData; 
		__pData = nullptr; 
	}

	T& operator[](int index) 
	{
		if (index < 0 || index >= size) 
		{
			cout << "ERROR: 배열의 경계를 벗어난 접근입니다." << endl;
			exit(1);
		}

		return __pData[index];
	}

	T& operator[](int index) const
	{
		return operator[](index);
	}

	int getSize() const 
	{
		return size; 
	}

private:
	T* __pData = nullptr; 
};

int main()
{
	MyArray<int, 3> arr; 

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;

	for (int i = 0; i < 3; ++i)
		cout << arr[i] << endl;

	return 0;
}