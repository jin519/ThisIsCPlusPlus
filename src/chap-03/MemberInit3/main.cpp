// 111p 멤버 함수 선언과 정의를 분리

#include <iostream>

using namespace std;

// 제작자 코드
class Test
{
public:
	Test()
	{
		data = 10;
	}

	int data;

	void printData();
};

void Test::printData() 
{
	cout << data << endl;
}

// 사용자 코드
int main()
{
	Test test;
	test.printData();

	return 0;
}