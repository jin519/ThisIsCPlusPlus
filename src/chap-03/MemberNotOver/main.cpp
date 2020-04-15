// 166p 서로 다른 자료형을 사용한 멤버 함수

#include <iostream>

using namespace std;

void testFunc(int param) 
{
	cout << param << endl;
}

int main()
{
	testFunc(10);
	testFunc(5.5);

	return 0;
}