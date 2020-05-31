// 431p ����ȭ�� �޸� ���� ó��

#include <iostream>
#include <new>

using namespace std;

class Test 
{
public:
	Test(int size) 
	{
		__pData = new char[size];
	}

	~Test() 
	{
		delete[] __pData;
		cout << "���������� ��ü�� �Ҹ���" << endl;
	}

private:
	char* __pData = nullptr; 
};

int main()
{
	try
	{
		int size;
		cout << "input size: "; 
		cin >> size;

		Test a(size);
	}
	catch (bad_alloc& except)
	{
		cout << except.what() << endl;
		cout << "ERROR: Test()" << endl;
	}

	return 0;
}