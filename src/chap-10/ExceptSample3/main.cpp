// 418p try/catch ���� if ���� �Բ� ����� ���� ó��

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
		cout << "ERROR: " << exp << "���� ���� �� �����ϴ�." << endl;
	}

	return 0;
}