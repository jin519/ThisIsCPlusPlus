// 417p if문을 사용한 예외 처리

#include <iostream>

using namespace std;

int main()
{
	int a = 100, b;
	cout << "input number: ";
	cin >> b;

	if (b)
		cout << a / b << endl;
	else
		cout << "ERROR: 0으로 나눌 수 없습니다." << endl;

	return 0;
}