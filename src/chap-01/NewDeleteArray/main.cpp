// 44p 배열 형태의 객체 생성

#include <iostream>

using namespace std;

int main()
{
	int* pArr = new int[5];

	for (int i = 0; i < 5; ++i)
		pArr[i] = ((i + 1) * 10);

	for (int i = 0; i < 5; ++i)
		cout << pArr[i] << endl;

	delete[] pArr; 

	return 0;
}