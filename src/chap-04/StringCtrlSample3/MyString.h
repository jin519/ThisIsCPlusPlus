#pragma once

class MyString 
{
public:
	/* constructor */
	MyString() = default;
	explicit MyString(const char* const pStr);
	MyString(const MyString& src);
	MyString(MyString&& src) noexcept;

	/* destructor */
	~MyString();

	/* member function */
	operator char* () const 
	{
		return __pBuffer; 
	}

	MyString& operator=(const MyString& rhs);
	void setString(const char* const pData);
	const char* getString() const;
	int getLength(const char* const pData) const;

private:
	/* member function */
	void __release();
	void __deepCopy(const char* const pData);

	/* member variable */
	char* __pBuffer = nullptr;
	int __length = 0;
};