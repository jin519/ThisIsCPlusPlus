// 321p vtable ±¸Çö

#include <iostream>

using namespace std;

class MyData 
{
public:
	MyData() 
	{
		cout << "MyData()" << endl;
	}

	virtual ~MyData() {}
	virtual void testFunc1() {}
	virtual void testFunc2() {}
};

class MyDataEx : public MyData 
{
public:
	MyDataEx() 
	{
		cout << "MyDataEx()" << endl;
	}

	virtual ~MyDataEx() {}
	virtual void testFunc1() {}
	
	virtual void testFunc2() 
	{
		cout << "testFunc2()" << endl;
	}
};

int main() 
{
	MyData* pData = new MyDataEx; 
	pData->testFunc2();
	delete pData; 

	return 0;
}