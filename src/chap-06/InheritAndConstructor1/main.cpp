// 290p ��� ������ �����ڿ� �Ҹ����� ȣ�� ����

#include <iostream>

using namespace std;

class MyDataA 
{
public:
	MyDataA() 
	{
		cout << "MyDataA()" << endl;
	}

	~MyDataA() 
	{
		cout << "~MyDataA()" << endl;
	}
};

class MyDataB : public MyDataA 
{
public:
	MyDataB() 
	{
		cout << "MyDataB()" << endl;
	}

	~MyDataB() 
	{
		cout << "~MyDataB()" << endl;
	}
};

class MyDataC : public MyDataB
{
public:
	MyDataC()
	{
		cout << "MyDataC()" << endl;
	}

	~MyDataC()
	{
		cout << "~MyDataC()" << endl;
	}
};

int main()
{
	cout << "*** begin ***" << endl;

	MyDataC data;

	cout << "*** end ***" << endl;

	return 0;
}