// 363p friend �Լ�

#include <iostream>

using namespace std;

class MyData 
{
public:
	MyData(int data) : __data(data) {}
	
	int getData() const 
	{
		return __data;
	}

	void setData(int data) 
	{
		__data = data;
	}

	friend void printData(const MyData& data); 

private:
	int __data = 0;
};

void printData(const MyData& data) 
{
	cout << "printData(): " << data.__data << endl;
}

int main() 
{
	MyData a(5);
	printData(a);

	return 0;
}