// 167p 멤버 함수 다중 정의1

#include <iostream>

using namespace std;

class MyData 
{
public:
	MyData() : data(0) {}

	int getData() 
	{
		return data;
	}

	void setData(int data) 
	{
		this->data = data; 
	}

	void setData(double data) 
	{
		data = 0;
	}

private:
	int data;
};

int main()
{
	MyData a;

	a.setData(10);
	cout << a.getData() << endl;

	MyData b;

	b.setData(5.5);
	cout << b.getData() << endl;

	return 0;
}