// 358p 인터페이스 다중 상속

#include <iostream>

using namespace std;

class MyUsb 
{
public:
	virtual int getUsbVersion() = 0; 
	virtual int getTransferRate() = 0; 
};

class MySerial 
{
public:
	virtual int getSignal() = 0;
	virtual int getRate() = 0;
};

class MyDevice : public MyUsb, public MySerial 
{
public:
	virtual int getUsbVersion() 
	{
		return 0; 
	}

	virtual int getTransferRate() 
	{
		return 0;
	}

	virtual int getSignal() 
	{
		return 0;
	}

	virtual int getRate() 
	{
		return 0;
	}
};

int main()
{
	MyDevice dev;

	return 0;
}