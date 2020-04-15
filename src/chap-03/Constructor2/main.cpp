// 124p 디폴트 생성자의 생략

#include <iostream>

using namespace std;

class Test
{
private:
	int data;

public:
	Test(int data) : data(data)
	{
		cout << "Test::Test()" << endl;
	}

	~Test()
	{
		cout << "Test::~Test() " << data << endl;
	}
};

int main()
{
	cout << "begin" << endl;
	
	Test a(1);
	cout << "before b" << endl;
	Test b(2);

	cout << "end" << endl;

	return 0;
}