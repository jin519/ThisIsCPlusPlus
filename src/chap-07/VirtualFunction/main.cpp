// 309p 가상 함수 정의

#include <iostream>

using namespace std;

class MyData 
{
public:
	virtual void printData() 
	{
		cout << "MyData: " << _data << endl;
	}

	void testFunc() 
	{
		cout << "*** testFunc() ***" << endl;
		printData(); 
		cout << "******************" << endl;
	}

protected:
	int _data = 10;
};

class MyDataEx : public MyData 
{
public:
	virtual void printData() 
	{
		cout << "MyDataEx: " << (_data * 2) << endl;
	}
};

int main() 
{
	MyDataEx a; 
	a.printData(); 

	MyData& b = a;
	b.printData();

	a.testFunc();

	return 0;
}