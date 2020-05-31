// 506p 함수 객체의 클래스 상속

#include <iostream>

using namespace std;

class CompareBase 
{
public:
	virtual int operator()(int a, int b) const = 0;
};

class TestData 
{
public:
	TestData() 
	{
		__arr[0] = 30;
		__arr[1] = 10;
		__arr[2] = 50;
		__arr[3] = 20;
		__arr[4] = 40;
	}

	void print() 
	{
		for (const auto element : __arr)
			cout << element << ' ';
		cout << endl;
	}

	void sort(const CompareBase& cmp) 
	{
		int tmp; 

		for (int i = 0; i < 4; ++i) 
		{
			for (int j = i + 1; j < 5; ++j) 
			{
				if (cmp(__arr[i], __arr[j]) < 0) 
				{
					tmp = __arr[i];
					__arr[i] = __arr[j];
					__arr[j] = tmp;
				}
			}
		}
	}

private: 
	int __arr[5];
};

class MyCmpDesc : public CompareBase 
{
public:
	int operator()(int a, int b) const 
	{
		return a - b;
	}
};

class MyCmpAsce : public CompareBase 
{
public:
	int operator()(int a, int b) const 
	{
		return b - a;
	}
};

int main() 
{
	TestData data; 

	MyCmpDesc desc;
	data.sort(desc);
	data.print();

	MyCmpAsce asce;
	data.sort(asce);
	data.print(); 

	return 0;
}