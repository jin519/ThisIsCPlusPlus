#include "MyString.h"
#include <iostream>

using namespace std;

/* constructor */
MyString::MyString(const char* const pStr)
{
	setString(pStr);
}

MyString::MyString(const MyString& src)
{
	__length = src.__length;
	__deepCopy(src.__pBuffer);
}

MyString::MyString(MyString&& src) noexcept 
{
	__length = src.__length;
	__pBuffer = src.__pBuffer;

	src.__length = 0;
	src.__pBuffer = nullptr;
}

/* destructor */
MyString::~MyString() 
{
	__release();
}

/* member function */
MyString MyString::operator+(const MyString& rhs)
{
	MyString retVal(__pBuffer);
	retVal.append(rhs.__pBuffer);

	return retVal;
}

MyString& MyString::operator+=(const MyString& rhs)  
{
	append(rhs.__pBuffer);

	return *this;
}

MyString& MyString::operator=(const MyString& rhs) 
{
	if (this == &rhs)
		return *this;

	setString(rhs.__pBuffer);

	return *this; 
}

char& MyString::operator[](const int index) 
{
	return __pBuffer[index];
}

char MyString::operator[](const int index) const 
{
	return __pBuffer[index];
}

void MyString::setString(const char* const pData)
{
	__length = __calcLength(pData);

	if (__pBuffer)
		__release();

	__deepCopy(pData);
}

const char* MyString::getString() const
{
	return __pBuffer;
}

int MyString::getLength() const 
{
	return __calcLength(__pBuffer);
}

void MyString::append(const char* const pData)
{
	const int LENGTH = __calcLength(pData);

	if (!LENGTH)
		return;

	const int MEM_SIZE = (__length + LENGTH + 1);
	char* pBuffer = new char[MEM_SIZE] { '\0' };

	memcpy(pBuffer, __pBuffer, sizeof(char) * __length);
	memcpy((pBuffer + __length), pData, sizeof(char) * LENGTH);

	__length = (__length + LENGTH);

	__release();
	__pBuffer = pBuffer;
}

void MyString::__release() 
{
	__length = 0;

	delete[] __pBuffer;
	__pBuffer = nullptr;
}

void MyString::__deepCopy(const char* pData) 
{
	const int MEM_SIZE = (__length + 1);

	__pBuffer = new char[MEM_SIZE];
	memcpy(__pBuffer, pData, sizeof(char) * MEM_SIZE);
}

int MyString::__calcLength(const char* const pData) const
{
	const char* pOffset = pData;
	int retVal = 0;

	while (*(pOffset++))
		++retVal;

	return retVal;
}