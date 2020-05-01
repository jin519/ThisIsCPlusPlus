#pragma once

#include "MyString.h"

class MyStringEx : public MyString 
{
public:
	/* member function */
	int find(const char* string) const;
	virtual void setString(const char* const pData) override;
};