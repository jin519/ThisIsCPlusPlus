// 513p ¶÷´Ù Ä¸ÃÄ

#include <iostream>

using namespace std;

int main()
{
	int data = 10;
	cout << data << endl;

	auto testFunc = [data](void) -> void
	{
		cout << data << endl;
	};

	testFunc();

	return 0;
}