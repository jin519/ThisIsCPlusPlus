#include "MyString.h"

MyString::~MyString() 
{
	release();
}

int MyString::setString(const char* pData)
{
	if (!pData) 
		return 0;

	__length = __calcLength(pData);

	if (__buffer)
		release();

	__malloc(__length + 1);
	__copyData(pData);

	return __length;
}

const char* MyString::getString() const
{
	return __buffer;
}

void MyString::release() 
{
	delete[] __buffer;
	__buffer = nullptr;
}

int MyString::__calcLength(const char* pData) const
{
	const char* pOffset = pData;
	int retVal = 0;

	while (*(pData++)) 
		++retVal;

	return retVal;
}

void MyString::__malloc(const int size) 
{
	__buffer = new char[size];
}

void MyString::__copyData(const char* pData) 
{
	char* pOffset = __buffer;

	while (*pData) 
		*(pOffset++) = *(pData++);

	*pOffset = '\0';
}