// 515p 람다식 내부에서 값 변경 허용

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