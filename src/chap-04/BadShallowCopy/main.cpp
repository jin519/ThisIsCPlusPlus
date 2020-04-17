// 189p 얕은 복사의 문제점

#include <iostream>

using namespace std;

int main()
{
	int* pA = nullptr;
	int* pB = nullptr;

	pA = new int;
	*pA = 10;

	pB = new int;
	pB = pA;

	cout << *pA << endl;
	cout << *pB << endl;

	delete pA;
	delete pB;

	return 0;
}