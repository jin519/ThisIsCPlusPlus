// 394p ���ڿ��� �ٸ� �ڷ����� ������ ������ �Լ� ���ø�

#include <iostream>
#include <cstring>
#include <memory>

using namespace std;

template<typename T>
T add(T a, T b) 
{
	return (a + b); 
}

template<>
char* add(char* pLeft, char* pRight) 
{
	int leftSize = strlen(pLeft);
	int rightSize = strlen(pRight);
	char* pResult = new char[leftSize + rightSize + 1];

	strcpy_s(pResult, sizeof(char) * (leftSize + 1), pLeft);
	strcpy_s(pResult + leftSize, sizeof(char) * (rightSize + 1), pRight);

	return pResult;
}

int main()
{
	int result = add<int>(3, 4);
	cout << result << endl;

	char* pResult = add<>(const_cast<char*>("Hello"), const_cast <char*>("World"));
	cout << pResult << endl;

	delete[] pResult;

	return 0;
}