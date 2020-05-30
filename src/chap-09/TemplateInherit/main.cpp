// 398p Ŭ���� ���ø��� ���

#include <iostream>

using namespace std;

template <typename T>
class MyData 
{
protected:
	T _data;
};

template <typename T>
class MyDataEx : public MyData<T>
{
public:
	T getData() const
	{
		return MyData<T>::_data;
	}

	void setData(T data) 
	{
		MyData<T>::_data = data;
	}
};

int main() 
{
	MyDataEx<int> a;
	
	a.setData(5);
	cout << a.getData() << endl;

	return 0; 
}