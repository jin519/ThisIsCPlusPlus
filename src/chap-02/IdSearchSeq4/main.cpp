// 89p using namespace ������ �����ϱ� ��

#include <iostream>

using namespace std;

int gData = 100;

namespace Test 
{
	int gData = 200;
}

int main()
{
	cout << gData << endl;

	return 0;
}