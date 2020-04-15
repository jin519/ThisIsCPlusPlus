// 159p const 예약어로 선언한 상수형 메서드

#include <iostream>

using namespace std;

class Test 
{
public:
	Test(int data) : data(data) {}
	~Test() {}

	int getData() const 
	{
		return data;
	}

	void setData(int data) 
	{
		this->data = data;
	}

private:
	int data;
};

int main()
{
	Test a(10);
	cout << a.getData() << endl;

	return 0;
}