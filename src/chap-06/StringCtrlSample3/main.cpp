// 299p 실습 과제 11: 파생 클래스 생성자 다중 정의

#include "MyStringEx.h"
#include <iostream>

using namespace std;

int main() 
{
	MyStringEx strLeft("Hello"), strRight("World");
	cout << (strLeft + strRight) << endl;

	return 0;
}