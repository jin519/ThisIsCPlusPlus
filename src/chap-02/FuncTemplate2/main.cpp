// 70p �Լ� ���ø����� ���� add() �Լ�

#include <iostream>

using namespace std;

template <typename T> 
T add(T a, T b) 
{
	return (a + b);
}

int main()
{
	cout << add(3, 4) << endl;
	cout << add(3.3, 4.4) << endl;

	return 0;
}