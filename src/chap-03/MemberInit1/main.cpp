// 108p ��� ���� �ʱ�ȭ�� ���� ������ �Լ� ���

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
	
	void printData() 
	{
		cout << data << endl;
	}
};

// ����� �ڵ�
int main()
{
	Test test;
	test.printData();

	return 0;
}