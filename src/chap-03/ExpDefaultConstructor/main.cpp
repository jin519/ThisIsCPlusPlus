// 134p ����Ʈ �������� ���Ǹ� Ŭ���� �ܺη� �и�

#include <iostream>

using namespace std;

class Test 
{
public:
	Test();
	int data = 5;
};

Test::Test() {}

int main()
{
	Test a;
	cout << a.data << endl;

	return 0;
}