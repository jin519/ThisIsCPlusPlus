// 333p 인터페이스

#include <iostream>

using namespace std;

class MyObject 
{
public:
	MyObject() {}
	virtual ~MyObject() {}
	virtual int getDeviceId() = 0;

protected:
	int _deviceId = 0;
};

void printId(MyObject* pObj) 
{
	cout << "device ID: " << pObj->getDeviceId() << endl;
}

class MyTv : public MyObject 
{
public:
	MyTv(int id) 
	{
		_deviceId = id; 
	}

	virtual int getDeviceId() 
	{
		cout << "MyTv::getDeviceId()" << endl;
		return _deviceId; 
	}
};

class MyPhone : public MyObject 
{
public:
	MyPhone(int id) 
	{
		_deviceId = id; 
	}

	virtual int getDeviceId() 
	{
		cout << "MyPhone::getDeviceId()" << endl;
		return _deviceId;
	}
};

int main() 
{
	MyTv a(5);
	MyPhone b(10);

	::printId(&a);
	::printId(&b);

	return 0; 
}