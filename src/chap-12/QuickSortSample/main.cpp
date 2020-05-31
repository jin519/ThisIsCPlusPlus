// 502p ȣ�� Ƚ���� �ľ��� �� ���� qsort() �Լ�

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