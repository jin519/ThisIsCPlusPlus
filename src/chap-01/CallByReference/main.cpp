// 48p 참조에 의한 호출

#include <iostream>

using namespace std;

void testFunc(int& param) 
{
	param = 10; 
}

int main()
{
	int data = 0;

	testFunc(data);
	cout << data << endl;

	return 0;
}