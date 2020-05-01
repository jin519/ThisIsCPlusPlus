#include "MyStringEx.h"

/* member function */
int MyStringEx::find(const char* string) const 
{
	const char* pBuffer = _pBuffer;
	const char* pString = string;
	int i = 0;

	do 
	{
		bool flag = false;

		if (*pBuffer == *pString) 
		{
			const int INDEX = i;
			flag = true;

			while (*(++pString) && *(++pBuffer))
			{
				++i;

				if (*pString != *pBuffer)
				{
					flag = false;
					pString = string;
					break;
				}
			}

			if (flag)
				return INDEX;
		}
		else 
		{
			++i;
			++pBuffer;
		}
	} while (*pBuffer);

	return -1;
}