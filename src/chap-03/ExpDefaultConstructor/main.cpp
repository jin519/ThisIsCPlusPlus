// 134p 디폴트 생성자의 정의를 클래스 외부로 분리

#include <iostream>

using namespace std;

class Test 
{
public:
	Test();
	int data = 5;
};

Test::Test() {}

int main()
{
	Test a;
	cout << a.data << endl;

	return 0;
}