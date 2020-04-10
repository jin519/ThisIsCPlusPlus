// 64p 함수의 다중 정의

#include <iostream>

using namespace std;

int add(int a, int b, int c) 
{
	cout << "add(int, int, int): ";

	return (a + b + c);
}

int add(int a, int b) 
{
	cout << "add(int, int): ";

	return (a + b);
}

double add(double a, double b) 
{
	cout << "add(double, double): ";

	return (a + b); 
}

int main()
{
	cout << add(3, 4) << endl;
	cout << add(3, 4, 5) << endl;
	cout << add(3.3, 4.4) << endl;

	return 0;
}