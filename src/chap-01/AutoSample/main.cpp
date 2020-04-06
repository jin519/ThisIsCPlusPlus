// 42p auto 예약어 사용

#include <iostream>

int main()
{
	int a = 10;
	int b(a);
	auto c(b);

	std::cout << a + b + c << std::endl;

	return 0;
}