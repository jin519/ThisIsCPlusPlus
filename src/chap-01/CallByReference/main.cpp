// 48p ������ ���� ȣ��

#include <iostream>

using namespace std;

void testFunc(int& param) 
{
	param = 10; 
}

int main()
{
	int data = 0;

	testFunc(data);
	cout << data << endl;

	return 0;
}