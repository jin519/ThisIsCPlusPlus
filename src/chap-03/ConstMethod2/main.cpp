// 163p mutable ¿¹¾à¾î

#include <iostream>

using namespace std;

class Test
{
public:
	Test(int data) : data(data) {}
	~Test() {}

	int getData() const
	{
		data = 20;
		return data;
	}

	void setData(int data)
	{
		this->data = data;
	}

private:
	mutable int data;
};

int main()
{
	Test a(10);
	cout << a.getData() << endl;

	return 0;
}