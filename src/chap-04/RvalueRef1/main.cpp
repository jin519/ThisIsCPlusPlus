// 216p r-value 참조의 사용 예1

#include <iostream>

using namespace std;

int main()
{
	int&& data = (3 + 4);

	cout << data << endl;
	data++;
	cout << data << endl;

	return 0;
}