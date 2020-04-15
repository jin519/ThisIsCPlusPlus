// 109p 생성자 함수의 역할

#include <iostream>

using namespace std;

// 제작자 코드
class Test
{
public:
	Test()
	{
		cout << "Test() : 생성자 함수" << endl;
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
	cout << "main() 함수 시작" << endl;

	Test test;
	test.printData();

	cout << "main() 함수 끝" << endl;

	return 0;
}