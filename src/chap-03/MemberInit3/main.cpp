// 111p ��� �Լ� ����� ���Ǹ� �и�

#include <iostream>

using namespace std;

// ������ �ڵ�
class Test
{
public:
	Test()
	{
		data = 10;
	}

	int data;

	void printData();
};

void Test::printData() 
{
	cout << data << endl;
}

// ����� �ڵ�
int main()
{
	Test test;
	test.printData();

	return 0;
}