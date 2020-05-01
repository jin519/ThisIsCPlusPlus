// 286p 메서드 재정의로 원본 형식을 참조

#include <iostream>

using namespace std;

class MyData
{public:
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

class MyDataEx : public MyData
{
public:
	void setData(const int data)
	{
		if (data < 0)
			MyData::setData(0);

		if (data > 10)
			MyData::setData(10);
	}
};

int main()
{
	MyDataEx a;
	MyData& data = a;

	data.setData(15); 
	cout << data.getData() << endl;

	return 0;
}