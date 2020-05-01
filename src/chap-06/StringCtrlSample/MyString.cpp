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
	_length = src._length;
	__deepCopy(src._pBuffer);
}

MyString::MyString(MyString&& src) noexcept 
{
	_length = src._length;
	_pBuffer = src._pBuffer;

	src._length = 0;
	src._pBuffer = nullptr;
}

/* destructor */
MyString::~MyString() 
{
	__release();
}

/* member function */
MyString::operator const char*() const
{
	return _pBuffer;
}

MyString MyString::operator+(const MyString& rhs)
{
	MyString retVal(_pBuffer);
	retVal.append(rhs._pBuffer);

	return retVal;
}

MyString& MyString::operator+=(const MyString& rhs)  
{
	append(rhs._pBuffer);

	return *this;
}

MyString& MyString::operator=(const MyString& rhs) 
{
	if (this == &rhs)
		return *this;

	setString(rhs._pBuffer);

	return *this; 
}

char& MyString::operator[](const int index) 
{
	return _pBuffer[index];
}

char MyString::operator[](const int index) const 
{
	return _pBuffer[index];
}

int MyString::operator==(const MyString& rhs) const 
{
	if (!strcmp(_pBuffer, rhs._pBuffer))
		return 1;

	return 0;
}

int MyString::operator!=(const MyString& rhs) const 
{
	return !operator==(rhs);
}

void MyString::setString(const char* const pData)
{
	if (_pBuffer)
		__release();

	_length = __calcLength(pData);
	__deepCopy(pData);
}

const char* MyString::getString() const
{
	return _pBuffer;
}

int MyString::getLength() const 
{
	return __calcLength(_pBuffer);
}

void MyString::append(const char* const pData)
{
	const int LENGTH = __calcLength(pData);

	if (!LENGTH)
		return;

	const int MEM_SIZE = (_length + LENGTH + 1);
	char* pBuffer = new char[MEM_SIZE] { '\0' };

	memcpy(pBuffer, _pBuffer, sizeof(char) * _length);
	memcpy((pBuffer + _length), pData, sizeof(char) * LENGTH);

	_length = (_length + LENGTH);

	__release();
	_pBuffer = pBuffer;
}

void MyString::__release() 
{
	_length = 0;

	delete[] _pBuffer;
	_pBuffer = nullptr;
}

void MyString::__deepCopy(const char* pData) 
{
	const int MEM_SIZE = (_length + 1);

	_pBuffer = new char[MEM_SIZE];
	memcpy(_pBuffer, pData, sizeof(char) * MEM_SIZE);
}

int MyString::__calcLength(const char* const pData) const
{
	const char* pOffset = pData;
	int retVal = 0;

	while (*(pOffset++))
		++retVal;

	return retVal;
}