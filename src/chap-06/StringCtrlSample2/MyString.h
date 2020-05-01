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
	operator const char*() const;
	MyString operator+(const MyString& rhs);
	MyString& operator+=(const MyString& rhs);
	MyString& operator=(const MyString& rhs);
	char& operator[](const int index);
	char operator[](const int index) const;
	int operator==(const MyString& rhs) const;
	int operator!=(const MyString& rhs) const;
	virtual void setString(const char* const pData);
	const char* getString() const;
	int getLength() const;
	void append(const char* const pData);

protected:
	/* member variable */
	int _length = 0;
	char* _pBuffer = nullptr;

private:
	/* member function */
	void __release();
	void __deepCopy(const char* const pData);
	int __calcLength(const char* const pData) const;
};