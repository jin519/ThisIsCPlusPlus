// 70p 함수 템플릿으로 만든 add() 함수

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