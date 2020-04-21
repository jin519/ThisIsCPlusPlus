// 259p 단항 증가 연산자 예

#include <iostream>

using namespace std;

class MyData 
{
public:
	explicit MyData(const int data) : __data(data) {}

	operator int()
	{
		return __data;
	}

	int operator++() 
	{
		cout << "operator++()" << endl;
		return ++__data;
	}

	int operator++(int) 
	{
		cout << "operator(int)" << endl;
		
		int data = __data;
		__data++;

		return data;;
	}

private:
	int __data = 0;
};

int main() 
{
	MyData a(10);

	cout << ++a << endl;
	cout << a++ << endl;
	cout << a << endl;

	return 0;
}