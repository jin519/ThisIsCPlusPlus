#pragma once

class MyString 
{
public:
	/* constructor */
	MyString() = default;

	/* destructor */
	~MyString();

	int setString(const char* pData);
	const char* getString() const;
	void release();

private:
	/* member function */
	int __calcLength(const char* pData) const;
	void __malloc(const int size);
	void __copyData(const char* pData);

	char* __buffer = nullptr;
	int __length = 0;
};