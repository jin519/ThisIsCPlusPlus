// 128p 참조자 선언을 위한 생성자 초기화 목록 이용

#include <iostream>

using namespace std;

class Test 
{
private:
	int& data;

public:
	Test(int& data) : data(data) {}

	int getData() 
	{
		return data;
	}
};

int main()
{
	int a = 10;
	Test test(a);

	cout << test.getData() << endl;

	a = 20;
	cout << test.getData() << endl;

	return 0;
}