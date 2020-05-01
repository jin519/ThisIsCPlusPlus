// 296p 생성자 초기화 목록에서 생성자 선택

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

	MyData(const int data) 
	{
		cout << "MyData(int)" << endl;
	}

	MyData(const double data) 
	{
		cout << "MyData(double)" << endl;
	}
};

class MyDataEx : public MyData
{
public:
	MyDataEx()
	{
		cout << "MyDataEx()" << endl;
	}

	MyDataEx(const int data) : MyData(data)
	{
		cout << "MyDataEx(int)" << endl;
	}

	MyDataEx(const double data) : MyData()
	{
		cout << "MyDataEx(double)" << endl;
	}
};

int main()
{
	MyDataEx a;

	cout << "******" << endl;
	MyDataEx b(5);
	cout << "******" << endl;

	MyDataEx c(3.3);

	return 0;
}