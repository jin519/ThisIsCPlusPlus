// 164p const_cast<>를 사용한 상수형 참조 변경

#include <iostream>

using namespace std;

void testFunc(const int& param) 
{
	int& newParam = const_cast<int&>(param);
	newParam = 20;
}

int main()
{
	int data = 10;
	testFunc(data);

	cout << data << endl;

	return 0;
}