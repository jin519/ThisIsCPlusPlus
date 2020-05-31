// 418p try/catch 문과 if 문을 함께 사용한 예외 처리

#include <iostream>

using namespace std;

int main()
{
	int a = 100, b; 

	cout << "input number: ";
	cin >> b; 

	try
	{
		if (b == 0)
			throw b;
		else
			cout << a / b << endl;
	}
	catch (int exp)
	{
		cout << "ERROR: " << exp << "으로 나눌 수 없습니다." << endl;
	}

	return 0;
}