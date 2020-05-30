// 396p 클래스 템플릿 특수화

#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
class MyData
{
public:
	MyData(T data) :__data(data) {}
	
	T getData() 
	{
		return __data; 
	}

	void setData(T data) 
	{
		__data = data; 
	}

private:
	T __data;
};

template<>
class MyData<char*> 
{
public:
	MyData(char* data) 
	{
		int len = strlen(data);
		__pData = new char[len + 1];
		strcpy_s(__pData, sizeof(char) * (len + 1), data);
	}

	~MyData() 
	{
		delete[] __pData;
	}

	char* getData() 
	{
		return __pData;
	}

private:
	char* __pData; 
};

int main()
{
	MyData<char*> a(const_cast<char*>("Hello"));
	cout << a.getData() << endl;

	return 0;
}