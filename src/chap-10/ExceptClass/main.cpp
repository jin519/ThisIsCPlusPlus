// 426p ���� Ŭ���� ���

#include <iostream>
#include <cstring>

using namespace std;

class MyException 
{
public:
	MyException(int errorCode, const char* pMsg) 
	{
		__errorCode = errorCode; 
		strcpy_s(__msg, sizeof(__msg), pMsg);
	}

	int getErrorCode() const
	{
		return __errorCode;
	}

	const char* getMessge() const
	{
		return __msg; 
	}

private:
	int __errorCode;
	char __msg[128];
};

int main()
{
	try
	{
		int input = 0;
		
		cout << "���� ������ �Է��ϼ���: ";
		cin >> input; 

		if (input < 0)
		{
			MyException except(10, "���� ������ �Է��ؾ� �մϴ�"); 
			throw except; 
		}
	}
	catch (MyException& exception)
	{
		cout << "ERROR CODE [" << exception.getErrorCode() << "] " << exception.getMessge() << endl;
	}

	return 0;
}