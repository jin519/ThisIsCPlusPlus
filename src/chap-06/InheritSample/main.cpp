// 274p 상속 클래스 기본

#include <iostream>

using namespace std;

// 제작자 - 초기 개발자
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

// 제작자 - 후기 개발자
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