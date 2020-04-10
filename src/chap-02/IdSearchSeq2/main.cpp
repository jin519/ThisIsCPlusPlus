// 86p 범위 검색의 확장

#include <iostream>

using namespace std;

int main()
{
	int input = 0;

	cout << "11 이상의 정수를 입력하세요: ";
	cin >> input;

	if (input > 10)
		cout << input << endl;
	else
		cout << "Error!" << endl;

	return 0;
}