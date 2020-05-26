#include <iostream>

using namespace std;

class MyInterface 
{
public:
	MyInterface() 
	{
		cout << "MyInterface()" << endl;
	}

	virtual int getData() const = 0;
	virtual void setData(const int data) = 0;
};

class MyData : public MyInterface 
{
public:
	MyData() 
	{
		cout << "MyData()" << endl;
	}

	virtual int getData() const 
	{
		return __data;
	}

	virtual void setData(const int data) 
	{
		__data = data;
	}

private:
	int __data = 0; 
};

int main() 
{
	MyData a; 
	
	a.setData(5);
	cout << a.getData() << endl;

	return 0;
}