// 매개변수가 두 개일 때의 디폴트 값

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