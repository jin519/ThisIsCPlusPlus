// 257p �ǽ� ���� 8: ���ڿ��� ���� ������

#include "MyString.h"
#include <iostream>

using namespace std;

int main() 
{
	MyString strLeft("Test"), strRight("String");

	if (strLeft == strRight)
		cout << "Same" << endl;
	else
		cout << "Different" << endl;

	strLeft = MyString("String");

	if (strLeft != strRight)
		cout << "Different" << endl;
	else
		cout << "Same" << endl;

	return 0;
}