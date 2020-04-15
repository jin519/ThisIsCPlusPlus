// 108p 멤버 변수 초기화를 위한 생성자 함수 사용

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
	
	void printData() 
	{
		cout << data << endl;
	}
};

// 사용자 코드
int main()
{
	Test test;
	test.printData();

	return 0;
}