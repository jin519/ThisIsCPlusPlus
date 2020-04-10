// 85p 식별자에 접근하는 코드가 속한 블록 범위

#include <iostream>

using namespace std;

int data(20);

int main()
{
	int data(10);

	cout << data << endl;

	return 0;
}