// 90p Test ���ӽ����̽��� using ���� �߰�

#include <iostream>

using namespace std;

int gData = 100;

namespace Test
{
	int gData = 200;
}

using namespace Test;

int main()
{
	//cout << gData << endl;

	return 0;
}