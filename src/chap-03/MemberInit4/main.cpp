// 112p 생성자 초기화 목록을 이용한 멤버 변수 초기화

#include <iostream>

using namespace std;

// 제작자 코드
class Test
{
public:
	Test() : data1(10), data2(20) {}

	int data1;
	int data2;

	void printData();
};

void Test::printData()
{
	cout << data1 << endl;
	cout << data2 << endl;
}

// 사용자 코드
int main()
{
	Test test;
	test.printData();

	return 0;
}