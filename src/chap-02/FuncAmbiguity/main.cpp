// 67p ����Ʈ �Ű������� ���� ���ǰ� ���յǾ��� ���� ��ȣ��

#include <iostream>

using namespace std;

void testFunc(int a) 
{
	cout << "testFunc(int)" << endl;
}

void testFunc(int a, int b = 10) 
{
	cout << "testFunc(int, int)" << endl;
}

int main()
{
	// testFunc(5);

	return 0;
}