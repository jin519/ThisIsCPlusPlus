// 389p 멤버 선언과 정의 분리

#include <iostream>

using namespace std;

template <typename T>
class Test 
{
public:
	Test();
	T testFunc(); 

protected:
	static T _data; 
};

template <typename T>
Test<T>::Test() 
{

}

template <typename T>
T Test<T>::testFunc() 
{
	return _data; 
}

template <typename T>
T Test<T>::_data = 15; 

int main()
{
	Test<double> a;
	cout << a.testFunc() << endl;

	return 0;
}