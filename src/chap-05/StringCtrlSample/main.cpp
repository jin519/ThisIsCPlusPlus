// 240p 실습 과제 6: 문자열 덧셈

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