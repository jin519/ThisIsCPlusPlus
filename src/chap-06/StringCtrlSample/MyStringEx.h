#pragma once

#include "MyString.h"

class MyStringEx : public MyString 
{
public:
	/* member function */
	int find(const char* string) const;
};