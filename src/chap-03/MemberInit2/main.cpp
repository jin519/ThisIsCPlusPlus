// 109p ������ �Լ��� ����

#include <iostream>

using namespace std;

// ������ �ڵ�
class Test
{
public:
	Test()
	{
		cout << "Test() : ������ �Լ�" << endl;
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
	cout << "main() �Լ� ����" << endl;

	Test test;
	test.printData();

	cout << "main() �Լ� ��" << endl;

	return 0;
}