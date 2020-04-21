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

	MyString operator+(const MyString& rhs);
	MyString& operator+=(const MyString& rhs);
	MyString& operator=(const MyString& rhs);
	char& operator[](const int index);
	char operator[](const int index) const;
	int operator==(const MyString& rhs) const;
	int operator!=(const MyString& rhs) const;
	void setString(const char* const pData);
	const char* getString() const;
	int getLength() const;
	void append(const char* const pData);

private:
	/* member function */
	void __release();
	void __deepCopy(const char* const pData);
	int __calcLength(const char* const pData) const;

	/* member variable */
	char* __pBuffer = nullptr;
	int __length = 0;
};