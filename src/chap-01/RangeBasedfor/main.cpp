// 52p 범위 기반 for문

#include <iostream>

using namespace std;

int main()
{
	int list[] = { 10, 20, 30, 40, 50 };

	for (int i = 0; i < 5; ++i)
		cout << list[i] << ' ';
	cout << endl; 

	for (const auto element : list)
		cout << element << ' ';
	cout << endl;

	for (const auto& element : list)
		cout << element << ' ';
	cout << endl;

	return 0;
}