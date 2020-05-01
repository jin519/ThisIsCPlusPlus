// 294p 상속 관계에서의 논리 오류

#include <iostream>

using namespace std;

class MyDataA
{
public:
	MyDataA()
	{
		cout << "MyDataA()" << endl;
		_pData = new char[32];
	}

	~MyDataA()
	{
		cout << "~MyDataA()" << endl;
		delete[] _pData;
	}

protected:
	char* _pData = nullptr;
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
		delete[] _pData;
	}
};

int main()
{
	cout << "*** begin ***" << endl;

	MyDataC data;

	cout << "*** end ***" << endl;

	return 0;
}