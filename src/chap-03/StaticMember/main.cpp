// 170p static ���� ����� ���� ��� ���� �� ����

#include <iostream>

using namespace std;

class Test 
{
public:
	Test(int data) : __data(data)
	{
		__count++;
	}

	int getData() 
	{
		return __data;
	}

	void resetCount() 
	{
		__count = 0; 
	}

	static int getCount() 
	{
		return __count; 
	}

private:
	int __data;
	static int __count;
};

int Test::__count = 0; 

int main()
{
	Test a(5), b(10); 

	cout << a.getCount() << endl;
	b.resetCount(); 

	cout << Test::getCount() << endl;

	return 0;
}