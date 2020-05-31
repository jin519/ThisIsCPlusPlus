// 516p 복사 캡처할 변수가 여러 개

#include <iostream>

using namespace std;

int main()
{
	int x = 10, y = 20;

	auto testFunc = [x, y]() -> int
	{
		return x + y; 
	};

	cout << testFunc() << endl;

	return 0;
}