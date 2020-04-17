// 201p 실습 과제 3

#include "MyString.h"
#include <iostream>

using namespace std;

int main() 
{
	MyString strData, strTest;

	strData.setString("Hello");
	strTest.setString("World");

	// 복사 생성
	MyString strNewData(strData);
	cout << strNewData.getString() << endl;

	// 단순 대입 연산자 호출
	strNewData = strTest;
	cout << strNewData.getString() << endl;

	return 0;
}