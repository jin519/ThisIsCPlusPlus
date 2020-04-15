// 121p 持失切人 社瑚切

#include <iostream>

using namespace std;

class Test 
{
public:
	Test() 
	{
		cout << "Test::Test()" << endl;
	}

	~Test() 
	{
		cout << "Test::~Test()" << endl;
	}
};

int main() 
{
	cout << "begin" << endl;
	Test test;
	cout << "end" << endl;

	return 0;
}