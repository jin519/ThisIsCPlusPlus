// 420p int�� char �ڷ����� catch ����ȭ

#include <iostream>

using namespace std;

void exceptTest1() 
{
	int input;
	cout << "1 ~ 10 ���� ������ �Է��ϼ���: ";
	cin >> input;

	if (input < 1 || input > 10)
		throw input;
}

void exceptTest2()
{
	char ch; 
	cout << "Menu: [a]dd [d]elete [e]xit" << endl;
	cin >> ch;

	if (ch != 'a' && ch != 'd' && ch != 'e')
		throw ch; 
}

int main()
{
	cout << "*** begin ***" << endl;

	try
	{
		exceptTest1();
		exceptTest2(); 
	}
	catch (int input)
	{
		cout << "ERROR: " << input << "�� ������ ��� �����Դϴ�." << endl;
	}
	catch (char ch) 
	{
		cout << "ERROR: " << ch << "�� �� �� ���� �޴��Դϴ�." << endl;
	}

	return 0;
}