// 428p ���� Ǯ��

#include <iostream>

using namespace std;

void testFunc1() 
{
	// ���� �������� ȣ��� �Լ��� ���ܸ� ������.
	cout << "testFunc1() - begin" << endl;
	throw 0; 
	cout << "testFunc1() - end" << endl;
}

void testFunc2()
{
	cout << "testFunc2() - begin" << endl;
	testFunc1(); 
	cout << "testFunc2() - end" << endl;
}

void testFunc3()
{
	cout << "testFunc3() - begin" << endl;
	testFunc2();
	cout << "testFunc3() - end" << endl;
}

int main()
{
	try
	{
		testFunc3();
	}
	catch (...)
	{
		cout << "Exception handling" << endl;
	}

	return 0;
}