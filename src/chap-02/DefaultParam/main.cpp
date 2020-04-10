// 57p 디폴트 매개변수 사용

#include <iostream>

using namespace std;

int testFunc(int param = 10) 
{
	return param;
}

int main() 
{
	cout << testFunc() << endl;
	cout << testFunc(20) << endl;

	return 0;
}