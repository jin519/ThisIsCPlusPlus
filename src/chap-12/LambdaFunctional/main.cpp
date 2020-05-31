// 500p ���ٽ��� �ٸ� �Լ��� �Ű������� ���

#include <iostream>
#include <functional>

using namespace std;

void testFunc(char* pParam, function<int(char*, int)> param) 
{
	cout << pParam << endl;
	param(const_cast<char*>("Hello"), 10);
}

int main()
{
	cout << "*** begin ***" << endl;
	
	testFunc(const_cast<char*>("testFunc()"), [](char* pParam, int param) -> int
		{
			cout << pParam << ": " << param << endl;
			return 0; 
		});	

	cout << "*** end ***" << endl;

	return 0;
}