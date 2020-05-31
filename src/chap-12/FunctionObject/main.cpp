// 504p ÇÔ¼ö °´Ã¼

#include <iostream>

using namespace std;

class Add 
{
public:
	int operator()(int a, int b) 
	{
		cout << "()(int, int)" << endl;
		return a + b;
	}

	double operator()(double a, double b) 
	{
		cout << "()(double, double)" << endl;
		return a + b;
	}
};

int main()
{
	Add adder;

	cout << adder(3, 4) << endl;
	cout << adder(3.3, 4.4) << endl;

	return 0;
}