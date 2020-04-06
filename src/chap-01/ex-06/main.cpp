// 54p 연습문제 6번

#include <iostream>

using namespace std;

void sort(int* pList, const size_t size);
void swap(int& x, int& y);

int main()
{
	int list[] = { 50, 40, 30, 20, 10 };

	sort(list, (sizeof(list) / sizeof(list[0])));

	for (const auto element : list)
		cout << element << ' ';
	cout << endl;

	return 0;
}

void sort(int* pList, const size_t size)
{
	for (size_t i = 0; i < (size - 1); ++i)
	{
		int minIdx = i;

		for (size_t j = (i + 1); j < size; ++j)
		{
			if (pList[minIdx] > pList[j])
				minIdx = j;
		}

		if (i != minIdx)
			swap(pList[i], pList[minIdx]);
	}
}

void swap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}