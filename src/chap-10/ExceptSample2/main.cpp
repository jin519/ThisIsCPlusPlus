// 417p if���� ����� ���� ó��

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
		cout << "ERROR: 0���� ���� �� �����ϴ�." << endl;

	return 0;
}