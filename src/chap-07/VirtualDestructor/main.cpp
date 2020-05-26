// 318p 소멸자 가상화

#include <iostream>

using namespace std;

class MyData 
{
public:
	MyData() 
	{
		__pData = new char[32];
	}

	~MyData() 
	{
		cout << "~MyData()" << endl;
		delete[] __pData;
	}

private:
	char* __pData = nullptr; 
};

class MyDataEx : public MyData 
{
public:
	MyDataEx() 
	{
		__pData2 = new int; 
	}

	~MyDataEx() 
	{
		cout << "~MyDataEx()" << endl;
		delete __pData2; 
	}

private:
	int* __pData2; 
};

int main() 
{
	MyData* pData = new MyDataEx; 
	delete pData; 

	return 0;
}