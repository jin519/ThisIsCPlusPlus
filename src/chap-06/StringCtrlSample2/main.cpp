// 287p 실습 과제 10: 문자열 필터의 구현

#include "MyStringEx.h"
#include <iostream>

using namespace std;

int main() 
{
	MyStringEx strTest;
	strTest.setString("멍멍이아들");
	cout << strTest << endl;

	strTest.setString("Hello");
	cout << strTest << endl;

	return 0;
}