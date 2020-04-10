// 69p 템플릿 함수

#include <iostream>

using namespace std;

template <typename T>
T testFunc(T a) 
{
	cout << "매개변수 a: " << a << endl;
	return a;
}

int main()
{
	cout << "int\t" << testFunc(3) << endl;
	cout << "double\t" << testFunc(3.3) << endl;
	cout << "char\t" << testFunc('A') << endl;
	cout << "char*\t" << testFunc("TestString") << endl;

	return 0;
}