// 383p 클래스 템플릿

#include <iostream>

using namespace std;

template <typename T>
class MyData 
{
public:
	MyData(T data) : __data(data) {}
	
	T getData() const 
	{
		return __data; 
	}

	operator T() 
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

int main() 
{
	MyData<int> a(5);
	cout << a << endl;

	MyData<double> b(123.45);
	cout << b << endl;

	return 0;
}