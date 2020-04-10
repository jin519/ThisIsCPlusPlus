// 67p 디폴트 매개변수와 다중 정의가 조합되었을 때의 모호성

#include <iostream>

using namespace std;

void testFunc(int a) 
{
	cout << "testFunc(int)" << endl;
}

void testFunc(int a, int b = 10) 
{
	cout << "testFunc(int, int)" << endl;
}

int main()
{
	// testFunc(5);

	return 0;
}