// 130p 생성자 다중 정의

#include <iostream>

using namespace std;

class Test
{
public:
	Test(int data) : data(data) {}
	Test(int x, int y) : data(x + y) {}

	int getData() 
	{
		return data;
	}

private:
	int data;
};

int main()
{
	Test a(10);
	Test b(3, 4);

	cout << a.getData() << endl;
	cout << b.getData() << endl;

	return 0;
}