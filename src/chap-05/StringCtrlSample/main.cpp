// 240p �ǽ� ���� 6: ���ڿ� ����

#include "MyString.h"
#include <iostream>

using namespace std;

int main() 
{
	MyString strLeft("Hello"), strRight("World"), strResult;

	strResult = (strLeft + strRight);

	cout << strResult << endl;
	cout << strLeft << endl;

	strLeft += MyString("World");
	cout << strLeft << endl;

	return 0;
}