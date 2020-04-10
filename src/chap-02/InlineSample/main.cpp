// 72p 인라인 함수

#include <iostream>

using namespace std;

#define ADD(a, b) ((a) + (b))

int add(int a, int b) 
{
	return (a + b); 
}

inline int addNew(int a, int b) 
{
	return (a + b); 
}

int main()
{
	int a, b; 
	scanf_s("%d%d", &a, &b); 

	printf("ADD(): %d\n", ADD(a, b));
	printf("add(): %d\n", add(a, b));
	printf("addNew(): %d\n", addNew(a, b));

	return 0;
}