#pragma once

#include "MyString.h"

class MyStringEx : public MyString 
{
public:
	using MyString::MyString;

	/* member function */
	int find(const char* string) const;
};