// 277p 실습 과제 9: 문자열 검색 기능 추가하기

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