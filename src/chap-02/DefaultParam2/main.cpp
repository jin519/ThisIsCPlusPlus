// �Ű������� �� ���� ���� ����Ʈ ��

#include <iostream>

using namespace std;

int testFunc(int param1, int param2 = 2) 
{
	return (param1 * param2); 
}

int main()
{
	cout << testFunc(10) << endl;
	cout << testFunc(10, 5) << endl;

	return 0;
}