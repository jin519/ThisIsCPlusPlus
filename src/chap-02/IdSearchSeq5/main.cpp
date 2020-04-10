// 90p Test 네임스페이스에 using 선언 추가

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