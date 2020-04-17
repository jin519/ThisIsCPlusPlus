// 191p 포인터가 없는 복사 생성자 사용

#include <iostream>

using namespace std;

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

private:
	int __data = 0;
};

int main()
{
	MyData a; 
	a.setData(10);

	MyData b(a);
	cout << b.getData() << endl;

	return 0;
}