// 201p �ǽ� ���� 3

#include "MyString.h"
#include <iostream>

using namespace std;

int main() 
{
	MyString strData, strTest;

	strData.setString("Hello");
	strTest.setString("World");

	// ���� ����
	MyString strNewData(strData);
	cout << strNewData.getString() << endl;

	// �ܼ� ���� ������ ȣ��
	strNewData = strTest;
	cout << strNewData.getString() << endl;

	return 0;
}