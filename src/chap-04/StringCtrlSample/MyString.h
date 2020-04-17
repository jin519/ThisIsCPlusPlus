#pragma once

class MyString 
{
public:
	/* constructor */
	MyString() = default;
	MyString(const MyString& src);

	/* destructor */
	~MyString();

	/* member function */
	MyString& operator=(const MyString& rhs);
	void setString(const char* const pData);
	const char* getString() const;
	int getLength(const char* const pData) const;

private:
	/* member function */
	void __release();
	void __deepCopy(const char* pData);

	/* member variable */
	char* __pBuffer = nullptr;
	int __length = 0;
};