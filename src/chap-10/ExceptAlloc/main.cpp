// 431p 구조화된 메모리 예외 처리

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
		cout << "정상적으로 객체가 소멸함" << endl;
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