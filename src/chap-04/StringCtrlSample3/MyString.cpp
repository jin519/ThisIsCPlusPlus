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
	cout << "MyString 이동 생성자 호출" << endl;

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
MyString& MyString::operator=(const MyString& rhs) 
{
	if (this == &rhs)
		return *this;

	setString(rhs.__pBuffer);

	return *this; 
}

void MyString::setString(const char* const pData)
{
	__length = getLength(pData);

	if (__pBuffer)
		__release();

	__deepCopy(pData);
}

const char* MyString::getString() const
{
	return __pBuffer;
}

int MyString::getLength(const char* const pData) const 
{
	const char* pOffset = pData;
	int retVal = 0;

	while (*(pOffset++))
		++retVal;

	return retVal;
}

void MyString::__release() 
{
	delete[] __pBuffer;
	__pBuffer = nullptr;
}

void MyString::__deepCopy(const char* pData) 
{
	const int MEM_SIZE = (__length + 1);

	__pBuffer = new char[MEM_SIZE];
	memcpy(__pBuffer, pData, sizeof(char) * MEM_SIZE);
}