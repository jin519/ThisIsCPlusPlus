// 277p �ǽ� ���� 9: ���ڿ� �˻� ��� �߰��ϱ�

#include "MyStringEx.h"
#include <iostream>

using namespace std;

int main() 
{
	MyStringEx strTest;
	strTest.setString("I am a boy.");
	cout << strTest << endl;

	int index = strTest.find("am");
	cout << "index: " << index << endl;

	return 0;
}