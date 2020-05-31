// 420p int와 char 자료형의 catch 다중화

#include <iostream>

using namespace std;

void exceptTest1() 
{
	int input;
	cout << "1 ~ 10 양의 정수를 입력하세요: ";
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
		cout << "ERROR: " << input << "는 범위를 벗어난 숫자입니다." << endl;
	}
	catch (char ch) 
	{
		cout << "ERROR: " << ch << "는 알 수 없는 메뉴입니다." << endl;
	}

	return 0;
}