// 139p this 포인터 사용

#include <iostream>

using namespace std;

class MyData 
{
public:
	MyData(int data) : data(data) {}

	void printData() 
	{
		cout << data << endl;
		cout << MyData::data << endl;
		cout << this->data << endl;
		cout << this->MyData::data << endl;
	}

private:
	int data;
};

int main()
{
	MyData a(5), b(10);

	a.printData();
	b.printData();

	return 0;
}