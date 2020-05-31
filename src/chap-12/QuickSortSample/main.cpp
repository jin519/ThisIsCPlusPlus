// 502p 호출 횟수를 파악할 수 없는 qsort() 함수

#include <iostream>

using namespace std;

int compareData(const void* pLeft, const void* pRight) 
{
	return *(int*)pLeft - *(int*)pRight;
}

int main()
{
	int arr[] = { 30, 50, 10, 20, 40 };

	qsort(arr, 5, sizeof(int), compareData);

	for (auto& n : arr)
		cout << n << ' ';
	cout << endl;

	return 0;
}