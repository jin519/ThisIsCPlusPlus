// 341p static_cast »ç¿ë ¿¹

#include <iostream>

using namespace std;

class MyData 
{
public:
	MyData() {}
	virtual ~MyData() {}
	
	void setData(int data) 
	{
		__data = data;
	}

	int getData() 
	{
		return __data;
	}

private:
	int __data = 0;
};

class MyDataEx : public MyData 
{
public:
	void setData(int data) 
	{
		if (data > 10)
			data = 10;

		MyData::setData(data);
	}

	void printData() 
	{
		cout << "printData(): " << getData() << endl;
	}
};

int main() 
{
	MyData* pData = new MyDataEx;
	MyDataEx* pNewData = nullptr;

	pData->setData(15);

	pNewData = static_cast<MyDataEx*>(pData);
	pNewData->printData();  

	delete pData;

	return 0;
}