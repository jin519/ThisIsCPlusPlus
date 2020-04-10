// 89p using namespace 선언을 적용하기 전

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