// 328p 늦은 바인딩

#include <iostream>

using namespace std;

void testFunc1(int param) {}
void testFunc2(int param) {}

int main()
{
	int input = 0;
	cin >> input; 

	void(*pTest)(int) = nullptr;

	if (input > 10)
		pTest = testFunc1;
	else
		pTest = testFunc2;

	pTest(10);

	return 0;
}