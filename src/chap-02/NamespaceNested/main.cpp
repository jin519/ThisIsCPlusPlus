// 80p ���ӽ����̽��� ��ø

#include <iostream>

using namespace std;

namespace Test 
{
	int gData = 100; 

	namespace Dev 
	{
		int gData = 200;

		namespace Win 
		{
			int gData = 300;
		}
	}
}

int main()
{
	cout << Test::gData << endl;
	cout << Test::Dev::gData << endl;
	cout << Test::Dev::Win::gData << endl;

	return 0;
}