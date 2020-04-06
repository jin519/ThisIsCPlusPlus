// 46p 참조형 변수 사용

#include <iostream>

using namespace std;

int main()
{
	int data = 10;
	
	int& ref = data; 
	ref = 20;

	cout << data << endl;

	int* pData = &data;
	*pData = 30;

	cout << data << endl;

	return 0;
}