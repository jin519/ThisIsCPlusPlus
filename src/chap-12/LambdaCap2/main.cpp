// 515p ���ٽ� ���ο��� �� ���� ���

#include <iostream>

using namespace std;

int main()
{
	int data = 10;
	cout << data << endl;

	auto testFunc = [data](void) mutable -> void
	{
		cout << ++data << endl;
	};

	testFunc();
	cout << data; 

	return 0;
}