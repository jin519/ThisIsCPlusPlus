// 385p 클래스 템플릿을 통한 배열 관리

#include <iostream>

using namespace std;

template <typename T>
class MyArray 
{
public:
	explicit MyArray(int size) : __size(size) 
	{
		__pData = new int[size];
	}

	~MyArray() 
	{
		__cleanup(); 
	}

	MyArray(const MyArray& src) 
	{
		__size = src.__size;
		__pData = new T[__size];
		memcpy(__pData, src.__pData, (sizeof(T) * __size));
	}

	MyArray& operator=(const MyArray& rhs) 
	{
		if (this == &rhs)
			return *this; 

		if (__pData)
			__cleanup();

		__size = rhs.__size;
		__pData = new T[__size];
		memcpy(__pData, rhs.__pData, (sizeof(T) * __size));

		return *this; 
	}

	MyArray(MyArray&& src) noexcept
	{
		__moveFrom(src);
	}

	MyArray& operator=(MyArray&& rhs) noexcept 
	{
		if (this == &rhs)
			return *this; 

		__cleanup();
		__moveFrom(rhs);

		return *this; 
	}

	T& operator[](int index) 
	{
		if ((index < 0) || (index >= __size)) 
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
		return __size; 
	}

private:
	void __cleanup() noexcept 
	{
		delete[] __pData;
		__pData = nullptr;
		__size = 0;
	}

	void __moveFrom(const MyArray& src) noexcept 
	{
		__size = src.__size;
		__pData = src.__pData;
		src.__size = 0;
		src.__pData = nullptr;
	}

	T* __pData = nullptr; 
	int __size = 0; 
};

int main()
{
	MyArray<int> arr(5);

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	for (int i = 0; i < 5; ++i)
		cout << arr[i] << ' ';
	cout << endl;

	MyArray<int> arr2(3);
	arr2 = arr;

	for (int i = 0; i < 5; ++i)
		cout << arr2[i] << ' ';
	cout << endl;

	return 0;
}