// 274p ��� Ŭ���� �⺻

#include <iostream>

using namespace std;

// ������ - �ʱ� ������
class MyData 
{
public:
	MyData() 
	{
		cout << "MyData()" << endl;
	}

	int getData() const 
	{
		return __data;
	}

	void setData(const int data) 
	{
		__data = data;
	}

protected:
	void printData() 
	{
		cout << "MyData::printData()" << endl;
	}

private:
	int __data = 0;
};

// ������ - �ı� ������
class MyDataEx : public MyData 
{
public:
	MyDataEx() 
	{
		cout << "MyDataEx()" << endl;
	}

	void testFunc() 
	{
		printData();
		setData(5);
		cout << MyData::getData() << endl;
	}
};

int main() 
{
	MyDataEx data;

	data.setData(10);
	cout << data.getData() << endl;

	data.testFunc();

	return 0;
}